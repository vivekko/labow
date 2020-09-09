 Good Number  -> 1 and greater
 Bad Number   -> f(x) = 1 if good


f(x) = 0 if baLet's have two pointer 
f(l) = bad
f(r) = good

while(r>l+1){
    m = (l+r)/2;
    if(f(m)==true)
        r = m;
    else 
        l = m;
}
___________________________________________________________________________

if a*b is size of rectange and task is to find min x square such that n rectangles can fit there

Solution: we can find by (x/a)*(x/b) >=n
          Now the task is to minimize x
          consider two pointers l and r
          l is pointing to bad value
          r should point to good value but we don't know
          After getting the value 
          Apply Binary Search to find min r 
____________________________________________________________________________

