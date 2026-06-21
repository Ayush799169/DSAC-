/*#include<iostream>
using namespace std;

        int main(){
            int n;
            cout<<"Enter the number of elements: ";
            cin>>n;
            if(n%2==0){
           for(int i=1; i<=n; i++){
            cout<<i<<" ";
           }
            }
            else{
                for(int i=1; i<=n; i++){
                    if(i%2!=0){
                        cout<<i<<" ";
                    }
                }
           }
            return 0;
        }
       #include<iostream>
       using namespace std;

        int main(){
            for(int i=1; i<=20; i++){
                if(i%2!=0){              //if(i%2==0) likh do to even no. aa jayega
                    cout<<i<<" ";
                }
            }
        
            return 0;

        }          //even or odd sum

        #include<iostream>
       using namespace std;
       int main(){
            int n;
            cout<<"Enter the number of elements: ";
            cin>>n;
            int sum=0;
            for(int i=1; i<=n; i++){
                if(i%2==0){              //if(i%2!=0) likh do to odd no. ka sum aa jayega
                    sum=sum+i;
                }
            }
            cout<<"sum="<<sum<<endl;
        
            return 0;

        }*/
        #include<iostream>
       using namespace std;
       int main(){
            int n;
            cout<<"Enter the number of elements: ";
            cin>>n;
            int sum=0;
            if(n%2==0){
            for(int i=1; i<=n; i++){
                if(i%2==0){              
                    sum=sum+i;
                }
            }
            cout<<"sum="<<sum<<endl;
        } else {
                for(int i=1; i<=n; i++){
                    if(i%2!=0){
                        sum=sum+i;
                    }
                }
                cout<<"sum="<<sum<<endl;
            }
            return 0;
        }

       /*
#include<iostream>
using namespace std;

        int main(){
            int i ,n;
            int sum=0;
            cout<<"Enter the number of elements: ";
            cin>>n;
            for(i=1; i<=n; i++){
                sum=sum+i;
                cout<<"sum="<<sum<<endl;
            }
            return 0;
        }
#include<iostream>
using namespace std;

        int main(){
            int i,n;
            cout<<"Enter the number of elements: ";
            cin>>n;
            for(i=n;i>0;i--){
                cout<<i<<" ";
            }
            return 0;
        }
#include<iostream>
using namespace std;

        int main(){
            int i;
           
            for(i=20;i>0;i--){
                cout<<i<<" ";
            }
            return 0;
        }

#include<iostream>
using namespace std;

        int main(){
            int i,n;
            int fact=1;
            cout<<"Enter the number of elements: ";
            cin>>n;
            for(i=1; i<=n; i++){
                fact=fact*i;
                cout<<"factorial="<<fact<<endl;
            }
            return 0;
        }
#include<iostream>
using namespace std;

        int main(){
            int i;
            int fact=1;
            for(i=1; i<=4; i++){
                fact=fact*i;
                cout<<"factorial="<<fact<<endl;
            }
            return 0;
        }*/