#include<iostream>
using namespace std;
class hcn{
    private:
    float d, r, dt, cv;
    //char* hcn = new char[10];
    float dt();
    float cv();
    
    public:
    hcn(){
        d = 0;
        r = 0;
     //  char* hcn = new char[0];
    }
    hcn(){
       this -> d=d;
        this ->  r=r;
       // hcn = new hcn[10];
    }
    ~hcn(){
        d=0;
        r=0;
       // delete hcn[];
    }
    float hcn:: dt(){
        return d*r;
    }
    float cv(){
        return (d+r)*2;
    }
};
int main() {
    hcn h;
    //char* hcn = new char[10]
   // hcn h1(10,20);
   // cout<< " chu vi la : " << h1.cv();
  //  cout << " dien tich la : " << h1.dt();
    return 0;
}