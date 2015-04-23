#include<iostream>
#include <queue>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;

#define white 0
#define gray 1
#define black 2
int visit_count[100000];
class node;

class edge{
	node *destination;
	edge *next;
public:
	edge(node *d){
		destination = d;
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

class graph
{
	node *first_node;
	queue <node*> q;
public:
	graph(){
		first_node = NULL;
	}
	node *add_node(int x){
		node *t = find(x);
		if(!t)
		{
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

	void take_input(int x){
		while(x--){
			int s,d;
			cin>>s;
			cin>>d;
			add_edge(s,d);
		}
	}
	void initialize()
	{
		node *t = first_node;
		while(t){
			t->set_color(white);
			t = t->get_next();
		}
	}
	void dfs(node *n, int i){
		//cout<<n->get_id()<<endl;
		n->set_color(gray);
		edge *e = n->get_adjacent();
		while(e)
		{
			node *d = e->get_destination();
			if(d->get_color()==white)
				dfs(d, i);
			e = e->get_next();
		}
		n->set_color(black);
		visit_count[i]++;
	}
};
int main(){
	int k, nodes, sq=1;
	cin>>k;
	while(k--){
		cin>>nodes;
		memset(visit_count, 0, sizeof(visit_count));
		graph *p;
		node *t;
		p = new graph();
		p->take_input(nodes);
		for(int i=1; i<=nodes; i++){
			p->initialize();
			//cout<<"enter source:";
			int x=i;
			t = p->find(x);
			p->dfs(t, x);
		}
		int max=0, ans;
		for(int i=1; i<=nodes; i++){
			if(max<visit_count[i]){
				max=visit_count[i];
				ans=i;
			}
		}
		cout<<"Case "<<sq++<<": "<<ans<<endl;

	}
	return 0;
}