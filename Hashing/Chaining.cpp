#include<bits/stdc++.h>
using namespace std;
struct Myhash{
list<int>*table;
int bucket;
void hash(int v){
    bucket=v;
    table=new list<int>[bucket];
}
void insert(int key){
    int i=key%bucket;
    table[i].push_back(key);
}
void remove(int key){
    int i=key%bucket;
    table[i].remove(key);
}
void display(){
    for(int i=0;i<bucket;i++){
    for(auto p:table[i]){
     cout<<p;
    }
    }
}
int search(int key)
{
    int i=key%bucket;
  for(auto p:table[i]){
    if(p==key)
    return 1;
  return 0;
  }
}
};
int main(){
Myhash s;
s.hash(7);
s.insert(5);
s.insert(8);
cout<<s.search(5);
s.display();
}