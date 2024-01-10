// design a data structure which represents two stacks using only one array common for both stacks

class TwoStack{
    int *arr; // we first maked an array
    int top1; 
    int top2;
    int size; // for size of the array

public:
    TwoStack(int s){
        this -> size = s;
        top1 = -1;
        top2 = s;
        arr = new int[s];
    }
    void push1(int num){
        if(top2 - top1 > 1){
            top1++;
            arr[top1] = num;

        }
        else{
            cout << "Stack Overflow" << endl;
        }
    }
    void push2(int num){
        if(top2 - top1 > 1){
            top2--;
            arr[top2] = num;
        }
        else{
            cout<<"Stack Overflow"<<endl;
        }
    }
    int pop1(){
        if(top1 >= 0){
            int ans = arr[top1];
            top1--;
            return ans;
        }
        else{
            return -1;
        }
    }
    int pop2(){
        if(top2 < size){
            int ans = arr[top2];
            top2++;
            return ans;
        }
        else{
            return -1;
        }
    }
};
// stack1 goes from left to right and stack2 goes from right to left but 
// in stack2 top is at start i.e or at the middle of the array