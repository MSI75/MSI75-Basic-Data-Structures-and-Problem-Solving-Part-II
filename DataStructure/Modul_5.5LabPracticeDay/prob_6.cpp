#include <bits/stdc++.h>
using namespace std;

class Cuboid
{
    int length, width, height;

public:
    Cuboid()
    {
        length = 0;
        width = 0;
        height = 0;
    }

    Cuboid(int length, int width, int height){
        this->length = length;
        this->width = width;
        this->height = height;
    }

    int getVolume(){
        int volume = length * width * height;
        return volume;
    }

    int getSurfaceArea(){
        int surfaceArea = 2*length*width+2*length*height+2*height*width;
        return surfaceArea;
    }

    // bool operator < (Cuboid c){
    //     return getVolume()<c.getVolume();
    // }

    bool operator < (Cuboid c){
        return getSurfaceArea()<c.getSurfaceArea();
    }
};

// int comp(Cuboid a, Cuboid b){
//     return a.getVolume()<b.getVolume();
// }

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<Cuboid>a;

    int b, c, d;

    for(int i = 0; i<5; i++){
         cin>>b>>c>>d;
        a.push_back(Cuboid(b, c, d));
    }
    
    // cout<<"Befor Sorted Volume :- ";
    // for(int i = 0; i<5; i++){
    //   cout<< a[i].getVolume()<<" ";
    // }

    // cout<<"\nAfter Sorted Volume :- ";
    // sort(a.begin(), a.end(), comp);

    //  sort(a.begin(), a.end());

    // for(int i = 0; i<5; i++){
    //    cout<< a[i].getVolume()<<" ";
    // }

    
    cout<<"Befor Sorted SurfaceArea :- ";
    for(int i = 0; i<5; i++){
      cout<< a[i].getSurfaceArea()<<" ";
    }

    cout<<"\nAfter Sorted SurfaceArea :- ";
    // sort(a.begin(), a.end(), comp);

     sort(a.begin(), a.end());

    for(int i = 0; i<5; i++){
       cout<< a[i].getSurfaceArea()<<" ";
    }



}