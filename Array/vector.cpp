/*#include<iostream>
#include<vector>
using namespace std;
int main()
{vector<int> vec={1,2,3,4,5};
    cout<<vec[0]<<endl;
    return 0;

}
#include<iostream>
#include<vector>
using namespace std;        //size of vector
int main()
{vector<int> vec={1,2,3,4,5};
for(int i=0;i<vec.size();i++)
    cout<<vec[i]<<endl;
    return 0;

}   */                    //push_back()
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec={1,2,3,4,5};                            //indexing badega data ke liye int 
    cout<<"size of vector: "<<vec.size()<<endl;
    vec.push_back(10);  //vec.push_back(20);                 
    cout<<"size of vector after push_back: "<<vec.size()<<endl;
    vec.pop_back();                                                   //pop_back()
    cout<<"size of vector after pop_back: "<<vec.size()<<endl;
    cout<<"first element: "<<vec.front()<<endl;
    cout<<"last element: "<<vec.back()<<endl;
    for(int i=0;i<vec.size();i++)
        cout<<vec[i]<<endl;
    return 0;
}