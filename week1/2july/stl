#include <bits/stdc++.h>
using namespace std;

void print ()
{
    cout<<"hello_world!";
}



void expl_Pair()
{
    pair<int,int>p ;
    p = {3,3};
    cout<<"first:"<<p.first<<endl;
    cout<<"second:"<<p.second<<endl;
    
    pair <int , pair <int , int>> nest = {3,{4,5}};

    cout<< nest.first<<endl;
    cout<< nest.second.first<<endl; 
    cout<< nest.second.second<<endl; 
    
    pair<int , int > arr[] = {{2,3},{3,4},{4,5}};
    cout<< arr[1].second;
      
}


void expl_vector ()
{
    vector <int> v ;
    v.push_back (1);
    v.emplace_back (2);

    vector <pair<int,int>> vec;
    vec.push_back ({1,2});   // insert pair in vector
    vec.emplace_back (1,2);  // insert pair , atomaticallt detect pair 

    vector <int> ve(5,100);     //{100,100,100,100,100}
    vector <int> vi(5);         //{0,0,0,0,0}

    vector <int> v1 (5,20);
    vector <int> v2 (v1);         //v2 is copy of v1


    vector <int> :: iterator it = v.begin();            //v = {1,2}
    it++;
    cout<<*it<<endl;                                    //2

    vector <int> :: iterator it1 = v.end();             //v = {1,2}
    it1--;
    cout<<*it1<<endl;                                   //2    

    cout<< v[0]<<endl;                                  //1
    cout<< v.at(0)<<endl;                               //1

    cout<< v.front()<<endl;                             //1
    cout<< v.back()<<endl;                              //2


    vector <int > vet = {1,2,3,4,5};
    for (int i = 0; i<vet.size(); i++)
    {
        cout<<vet[i]<<" ";
    }
    cout<<endl;

    for (auto it = vet.begin(); it!=vet.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    for (auto it : vet)
    {
        cout<<it<<" ";
    }
    cout<<endl;

    //{1,2,3,4,5}
   vet.erase(vet.begin()+1);    //{1,3,4,5}


   vet = {1,2,3,4,5};
    vet.erase(vet.begin()+1,vet.begin()+3);    //{1,4,5}

    //insert function
    vet = {1,2,3,4,5};
    vet.insert(vet.begin()+1,100);    //{1,100,2,3,4,5}
    vet.insert(vet.begin()+1,2,100);    //{1,100,100,2,3,4,5}

    cout<<v.size ();        //no of element in vector

    v.pop_back();           //remove last element

    v.swap (vet);           //swap two vector

    v.clear();              //remove all element from vector

    v.empty();              //return true if vector is empty
    

}


int main ()
{
    expl_vector();
    
    return 0;
}
