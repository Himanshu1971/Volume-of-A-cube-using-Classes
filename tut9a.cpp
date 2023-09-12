#include<bits/stdc++.h>
using namespace std;

class cube{
    private:
    double height;
    double width;
    double length;

    public:
    void input(){
        cout<<"Enter the Length: ";
        cin>>length;
        cout<<"Enter the width: ";
        cin>>width;
        cout<<"Enter the height: ";
        cin>>height;
    }
    int vol(){
       int volume = length*width*height;
       return volume;
    }


};

int main(){
    class cube c;
    c.input();
    int vol = c.vol();
    cout<<vol<<endl;
}    

    