 /*5. Consider following class Numbers
class Numbers

{
int x,y,z;
public:
// methods

};
Overload the operator unary minus (-) to negate the numbers.
 */
 #include<iostream>
 using namespace std;
 class numbers
 {
   private:
        int x,y,z;
   public:
     void inputdata()
     { 
        cout<<"Enter First number "<<endl;
        cin>>x;
        cout<<"Enter second number "<<endl;
        cin>>y;
        cout<<"Enter third number "<<endl;
        cin>>z;
       
     }
     void  operator-()
     {
         x=-x;
         y=-y;
         z=-z;

     }
     void display()
     {
        cout<<"negated number are"<<endl;
        cout<<x<<" "<<y<<" "<<z;
     }
        

 };
 int main()
 {
    numbers n1;
    cout<<"Enter three numbers "<<endl;
    cout<<"_____________________________"<<endl;
    n1.inputdata();
    -n1;
    n1.display();
     return 0;
 }