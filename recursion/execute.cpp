// PRINT 1-n using RECURSION

/*#include<iostream>
using namespace std;

void Print(int n){
    if(n==0){             //base condition (minimum valid value)
    return ;}
else{
    Print(n-1);           // hypotheis (if function will successfully print n , try for n-1), making inpust smaller
    cout<<n<<endl;
}
}
int main()
{
 int n;
 cout<<"enter n"<<endl;
 cin>>n;

 Print(n);

 return 0;
} */

// PRINT N-1

// whole code will be same just print n before printing n-1,

// SORT AN ARRAY USING RECURSION

/*  #include <bits/stdc++.h>
using namespace std;
void insertion(vector<int>&v,int temp)
{
   //BASE CONDITION

  if(v.size()==0 || v[v.size()-1]<=temp)  //if the size of vector is 0 or the temp variable we need to insert is larget push and return.. suppose 1,2,3,4 is there in a vector and we need to insert 5 so 4 is at n-1 position(v.size-1)
  {
  v.push_back(temp); // push the temp variable
  return;                //and return
  }
  int x=v[v.size()-1];           //insertion function
  v.pop_back();                   //remove the element which is at n-1
  insertion(v,temp);               // insert rest elements
  v.push_back(x);                // now at the end pust the last ele which we removed from n-1th position
}
void sorting(vector<int>&v)
{
  if(v.size()<=1)
  return;
  int temp=v[v.size()-1];
  v.pop_back();
  sorting(v);
  insertion(v,temp);
}
int main()
{
   vector<int>v={5,3,2,4,1};
   sorting(v);
  for(auto it:v)
  cout<<it<<" ";
   return 0;
}*/

// SORT A STACK

/*#include<bits/stdc++.h>
using namespace std;
void sortedInsert(stack<int> &st,int element){
    if(st.empty() || element > st.top())
        st.push(element);
    else{
        int top_element = st.top();
        st.pop();
        sortedInsert(st,element);
        st.push(top element);
    }
}
void sortStack(stack<int> &st){
    if(!st.empty()){
        int top_element = st.top();
        st.pop();
        sortStack(st);
        sortedInsert(st,top_element);
    }
}
int main(){
    stack<int> st;
    int n;
    cin>>n;
    while (n--){
        int x;
        cin>>x;
        st.push(x);
    }
    sortStack(st);
    while(!st.empty()){
        int top = st.top();
        st.pop();
        cout<<top<<endl;
    }
    return 0;
}*/

// DEL MID TERM IN STACK

/*#include<bits/stdc++.h>
using namespace std;
void removeM(stack<int>&st,int k){
    if(st.size()==k){        //if the size of stack is equal to k(position from which middle element will be removed)
        st.pop();            //directly pop the element
        return;
    }
    int temp= st.top();       //remove the top element to make the input small   [5,4,3,2,1]...from here top ele is 5 and we will store that in temp
    st.pop();                 //pop that element
    removeM(st,k);             // now apply the remove func on rest stack [4,3,2,1]....
    st.push(temp);            // at last push 5 stored in temp at the top
}
int main(){
    int i;
     stack<int> st;                  //initialized a stack
     int arr[]={5,4,3,2,1};          //initialized an array
      for(i=0;i<sizeof(arr)/sizeof(arr[0]);i++){            //n=sizeof arr/size of arr[0]
            st.push(arr[i]);             //pushed all the array elements in stack
      }
      int k= st.size()/2+1;            //formula to find middle term
      removeM(st,k);
      cout<<"elements of the stack after removal of middle term is:";
      while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
      }

}*/

// REVERSE A STACK
/*
// C++ code to reverse a
// stack using recursion
#include <bits/stdc++.h>
using namespace std;

// Below is a recursive function
// that inserts an element
// at the bottom of a stack.
void insert_at_bottom(stack<int>& st, int x)
{

    if (st.size() == 0) {
        st.push(x);
    }
    else {

        // All items are held in Function Call
        // Stack until we reach end of the stack
        // When the stack becomes empty, the
        // st.size() becomes 0, the above if
        // part is executed and the item is
        // inserted at the bottom

        int a = st.top();
        st.pop();
        insert_at_bottom(st, x);

        // push allthe items held in
        // Function Call Stack
        // once the item is inserted
        // at the bottom
        st.push(a);
    }
}

// Below is the function that
// reverses the given stack using
// insert_at_bottom()
void reverse(stack<int>& st)
{
    if (st.size() > 0) {

        // Hold all items in Function
        // Call Stack until we
        // reach end of the stack
        int x = st.top();
        st.pop();
        reverse(st);

        // Insert all the items held
        // in Function Call Stack
        // one by one from the bottom
        // to top. Every item is
        // inserted at the bottom
        insert_at_bottom(st, x);
    }
    return;
}

// Driver Code
int main()
{
    stack<int> st, st2;
    // push elements into
    // the stack
    for (int i = 1; i <= 4; i++) {
        st.push(i);
    }

    st2 = st;

    cout << "Original Stack" << endl;
    // printing the stack after reversal
    while (!st2.empty()) {
        cout << st2.top() << " ";
        st2.pop();
    }
    cout<<endl;

    // function to reverse
    // the stack
    reverse(st);
    cout << "Reversed Stack" << endl;
    // printing the stack after reversal
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}*/

// SUBSET , powerset, sub sequence
/*#include<iostream>
using namespace std;
void solve(string ip, string op)
{
    if(ip.length()==0){
    cout<<op<<" ";
    return;
}
string op1= op;
string op2 =op;
 op2.push_back(ip[0]);     // a is pushed in op2 when we choose a to be as the input, int string abc a is at 0 index , b is at index 1 &c at 2
 ip.erase(ip.begin()+0);        //a from input is erased
              |      |
(function to del), (enter the index which you want to del)
 solve(ip, op1);
 solve(ip, op2);

}
 int main()
 {
    string ip="ab";

    string op=" ";
    solve(ip, op);
 }
*/

// UNIQUE SUBSET  (instead of directly printing the subsets make a map and store the subsets there one by one after checking if it already present there or not)
/*
#include<iostream>
#include<map>
using namespace std;
void solve(string ip, string op, map<string,int>&m)  //initializing a map
{
    if(ip.length()==0){   // if ip length is 0 insert in map
    m[op]++;            // insert in map
    if(m[op]==1)        // check if it is not already present in map
    cout<<op<<"\n";
    return;
}
string op1= op;
string op2 =op;
 op2.push_back(ip[0]);
 ip.erase(ip.begin()+0);

 solve(ip, op1, m);
 solve(ip, op2, m);

}
 int main()
 {
    string ip="ab";

    string op=" ";
    cout<<"\nsubsets are\n";
    map<string,int>m;
    solve(ip, op, m);
 }*/

// PERMUTATION WITH SPACES

/*#include<iostream>
using namespace std;
void solve(string ip, string op){

if(ip.length()==0){
cout<<op<<" ";
return;
}

string op1=op;
string op2=op;
op1.push_back('_');   //include space
op1.push_back(ip[0]);  //include b
op2.push_back(ip[0]);   //for output 2 add b without space
ip.erase(ip.begin()+0);  //erase b from space
solve(ip, op1);    // 1st recursive call

solve(ip, op2);    //second recursive call     (for two left out branches of tree)
return;


}
int main(){
    string ip="abc";
    string op=" ";
    op.push_back(ip[0]);
    ip.erase(ip.begin()+0);
    cout<<"the permutation is"<<endl;
    solve(ip,op);
}*/

// PERMUTATION WITH CASE CHANGE
/*
#include<iostream>

using namespace std;
void solve(string ip, string op){
    if(ip.length()==0){
        cout<<op<<" ";
        return;
    }
    string op1=op;
    string op2=op;

    op1.push_back(ip[0]);
    op2.push_back(toupper(ip[0]));
    ip.erase(ip.begin()+0);
    solve(ip, op1);
    solve(ip, op2);

}
int main(){
    string ip = "ab";
    string op=" ";
    cout<<"the permutation is";
    solve(ip,op);
}*/

// LETTER CASE CHANGE IN PERMUTATION
/*
#include<bits/stdc++.h>    //when we  use vector use header file bits/stdc++.h
using namespace std;


void solve(string ip, string op){
    if(ip.length()==0){
         cout<<op<<" ";
          return;
    }
    if(isalpha(ip[0])){                      //(isalpha) is used to check if it is char or not and if yes
          string op1=op;                     // two op will be there
          string op2=op;
          op1.push_back(tolower(ip[0]));         // one in lowercase
          op2.push_back(toupper(ip[0]));         //one in uppercase
          ip.erase(ip.begin()+0);                 //now del that char from input
         solve(ip,op1);
         solve(ip,op2);
    }
     else{
        string op1=op;
        op1.push_back(ip[0]);
        ip.erase(ip.begin()+0);
        solve(ip,op1);
     }

}
 int main(){
    string ip="a1B2";
    string op=" ";
    cout<<"permutation is";
    solve(ip,op);
 }
*/

// BALANCED PARANTHESIS
/*
#include <iostream>
#include <string>

using namespace std;

void generateParenthesis(int open, int close, string str, int n) {
    if (close == n) {
        cout << str << endl;
        return;
    }

    if (open > close) {
        generateParenthesis(open, close + 1, str + ")", n);
    }
    if (open < n) {
        generateParenthesis(open + 1, close, str + "(", n);
    }
}

int main() {
    int n = 3;
    generateParenthesis(0, 0, "", n);
    return 0;
}*/

// PRINT N BINARY NUMBERS
/*
#include<iostream>
#include<string>
using namespace std;

void solve(int one, int zero, int n, string op){
    if (n==0){
        cout<<op<<" ";
        return;
    }
    string op1=op;                        //for1
    op1.push_back('1');
    solve(one+1, zero, n-1, op1);
    if(one>zero){
        string op2 =op;
        op2.push_back('0');
        solve(one, zero+1, n-1, op2);
    }

}
int main(){
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    string op=" ";
    int one=0;    //initializing with 0
    int zero=0;
    solve(one,zero,n,op);
}*/

//


