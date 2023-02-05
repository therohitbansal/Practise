#include<bits/stdc++.h>
using namespace std;
struct Myhash{
public:
int *arr;
int cap,size;
Myhash(int c){
    cap=c;
    size=0;
    arr=new int[cap];
    for(int i=0;i<cap;i++){
        arr[i]=-1;
    }
   }
int hash(int key)
{
    return key%cap;
}
bool insert(int key){
    if(size==cap)
    return false;
    int i=hash(key);
    while(arr[i]!=-1 && arr[i]!=-2 && arr[i]!=key)
    {
        i=(i+1)%cap;
    } 
    if(arr[i]==key)
    return false;
    else
    {
        arr[i]=key;
        size++;
        return true;
    }
}
void display(){
    for(int i=0;i<cap;i++){
        cout<<arr[i]<<" ";
    }
}
bool search(int key){
    if(size==0)
    return false;
    int h=hash(key);
    int i=h;
    while(arr[i]!=-1)
    {
         if(arr[i]==key)
          return true;
        i=(i+1)%cap;
        if(i==h)
        return false;
    }
   
  return false;
    }
bool erase(int key){
    int h=hash(key);
    int i=h;
    while(arr[i]!=-1){
        if(arr[i]==key)
       { arr[i]=-2;
        return true;
    }
        i=(i+1)%cap;
        if(i==h)
        return false;
    }
    return false;

}
};
int main()
{
Myhash h(10);
h.insert(10);
h.display();
h.erase(10);
cout<<endl;
h.display();
cout<<h.search(5);
}