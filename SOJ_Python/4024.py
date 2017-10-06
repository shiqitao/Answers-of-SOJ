a,b = (int(x) for x in input().split())
if b > 0:
    print("%d+%d=%d" % (a,b,a + b))
    print("%d*%d=%d" % (a,b,a * b))
    print("%d/%d=%d" % (a,b,a / b))
    print("%d%%%d=%d" % (a,b,a % b))
elif b < 0:
    print("%d+(%d)=%d" % (a,b,a + b))
    print("%d*(%d)=%d" % (a,b,a * b))
    print("%d/(%d)=%d" % (a,b,a / b))
    print("%d%%(%d)=%d" % (a,b,a % b))
else:
    print("%d+0=%d" % (a,a))
    print("%d*0=0" % (a))
    print("%d/0:Error!" % (a))
    print("%d%%0:Error!" % (a))