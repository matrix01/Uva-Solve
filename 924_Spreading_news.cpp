#include<iostream>
#include <queue>
#include<stdio.h>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;

#define white 0
#define gray 1
#define black 2
#define inf_min -2147483647
int e, days[2505];

class node;

class edge{
	int weight;
	node *destination;
	edge *next;
public:
	edge(node *d){
		destination = d;
		weight = 0;
		next = NULL;
	}
	void set_next(edge *e){
		next = e;
	}
	node *get_destination(){
		return destination;
	}
	edge *get_next(){
		return next;
	}
	
};

class node{
	int id;
	edge *adjacent;
	node *next;
	int color;
public:
	node(int x){
		id=x;
		adjacent = NULL;
		next = NULL;
	}
	int get_id(){
		return id;
	}
	edge *get_adjacent(){
		return adjacent;
	}
	void set_adjacent(edge *e){
		adjacent = e;
	}
	node *get_next(){
		return next;
	}
	void set_next(node *n){
		next = n;
	}
	int get_color(){return color;}
	void set_color(int c){color = c;}
};

class graph{
	node *first_node;
	queue <node*> q;
public:
	graph(){
		first_node = NULL;
	}
	node *add_node(int x){
		node *t = find(x);
		if(!t){
			t = new node(x);
			t->set_color(white);
			t->set_next(first_node);
			first_node = t;
		}
		return t;
	}
	
	void add_edge(int x, int y){
		node *s = add_node(x);
		node *t = add_node(y);
		edge *e = new edge(t);
		e->set_next(s->get_adjacent());
		s->set_adjacent(e);
	}
	
	node *find(int x){
		node *t = first_node;
		while(t)
		{
			if(t->get_id() == x)
				break;
			t = t->get_next();
		}
		return t;
	}
	void take_input(){
		int n, d;
		cin>>e;
		for(int s=0; s<e; s++){
			cin>>n;
			while(n--){
				cin>>d;
				add_edge(s, d);
			}
		}
	}
	void initialize(){
		node *t = first_node;
		while(t){
			t->set_color(white);
			t = t->get_next();
		}
	}

	void bfs(node *n, int root){
		n->set_color(gray);
		q.push(n);
		days[root]=0;
		while(!q.empty()){
			node *t = q.front();
			//cout<<"Front: "<<t->get_id()<<endl;
			q.pop();
			edge *e = t->get_adjacent();
			while(e){
				node *d = e->get_destination();
				//cout<<"Adjacent: "<<d->get_id()<<endl;
				if(days[d->get_id()]==inf_min){
					//cout<<"Days AD: "<<d->get_id()<<" "<<"Days RT: "<<days[t->get_id()]<<endl;
					days[d->get_id()]=days[t->get_id()]+1;

				}
				if(d->get_color()==white){
					d->set_color(gray);
					q.push(d);
				}
				e = e->get_next();
			}
			t->set_color(black);
		}
		
	}
	void print_res(int root){
		int freq[2505];
		memset(freq, 0, sizeof(freq));
		for(int i=0; i<e; i++)
			if(days[i]!=inf_min)freq[days[i]]++;
		int maxi=inf_min, ind;
		for(int i=1; i<e; i++)
			if(maxi<freq[i]){
				maxi=freq[i];
				ind=i;
			}
			if(freq[ind]==0) printf("0\n");
			else
				printf("%d %d\n", freq[ind], ind);
	}
};
int main(){
	graph *p;
	node *t;
	p = new graph();
	p->take_input();
	int k;
	cin>>k;
	while(k--){
		int x;
		p->initialize();
		for(int i=0; i<e; i++) days[i]=inf_min;
		cin>>x;
		t = p->find(x);
		if(t){
			p->bfs(t, x);
			p->print_res(x);
		}
		else
			printf("0\n");
	}
	return 0;
}