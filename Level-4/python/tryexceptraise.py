#try -except -raise
import sys
def read_C():

    try:
        C=float(sys.argv[1])
    except IndexError:
        raise IndexError("1 Argument must provide")
    except ValueError:
        raise ValueError('Value must be number , not %s' % sys.argv[1])
    if C<-273.15:
        raise ValueError("%s, Value is lower than minimun" % C)
    return C
try:
    C=read_C()
except (IndexError,ValueError)as e:
    print(e)
    sys.exit(1)
F=(9.0/5)*C + 32
print("%s C is %s F"%(C,F))