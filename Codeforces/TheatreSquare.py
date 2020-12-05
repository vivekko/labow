n=0
m=0
a=0
n = int(input())
m = int(input())
a = int(input())
rowa = 0
rowb = 0
count = 0
cr = 0
cc = 0
# rem = m%a
if(int(m)%int(a)>0):
    cr = m/a + 1
else:
    cr = m/a
# rem = n%a
if(int(m)%int(a)>0):
    cc = n/a + 1
else:
    cc=n/a
print(cc*cr)
    # return 0;
