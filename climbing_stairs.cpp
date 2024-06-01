class Solution {
public:
    int climbStairs(int n) {
        int x=1;//one way is one step
        int y=2;// second way two step
        if(n<=2)// if no of stairs onr or 2 then two ways only return that only
        {
            return n;
        }
        for(int i=3;i<n;i++)// if n=3,4..or other..then then satrting from three and going till the number 
        {
            int copy=y;// firstly copy holds original value of of y ..for the x updatation
            y=y+x;// then  y do updation with adding x=>y=y+x
            x=copy;// then x takes the value of y
        }
        return(x+y);// then here returning the sum of both..ifits..inthe loop till i<=n ..then return onlyyy y...
        
    }
};
//now the approach
//for n= 1 or 2 ..there  will be two ways only either one one step or two step
// but from n=3..its returns the previous two values like in fibonacci series f(n)=f(n-1)+f(n-2)
// example=> n=3
// two ways 1  or 2..so x=1 and y =2..and their sum output=3
// for n=4... x=3(take value of previous y)..and y=5(3+2)=> output=8...and so on..
// it working on fibonacii series 
// and dynamic pr
// o(n)-complexity
