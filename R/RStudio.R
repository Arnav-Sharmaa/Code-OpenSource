# Assignment Operator

x<-20      # assignment can be made in two ways
x=20

x^2->y     # assigns value x^2 to y

# Vectors in R
# Vectors are data structures of same type

c(1,2,3,4)/2

c(1,2,3,4)/c(4,3,2,1)

# Methods of data input

# 1. c function

y<-c(1,2,3,9,15,17)

Names <- c("Bob","Jack")

# 2. Sequence Operator and Sequence function

1:4

-1:2

2*1:15

seq(2,8,by=2)                # Specifies interval and increment

seq(0,1,length=11)           # Specifies interval and the number of elements

seq(from = 1, to=30)

seq(to=30, from=0)

# 3. scan function

wt=scan()

# 4. rep function

x<-c(rep(1,4),rep(2,2),rep(3,5),7,rep(9,2))

rep(x, each=4)


#learning inbuilt functions

yy=c(rep(2,3),rep(9,2),rep(1,3))

rep(x, each=4)

#learning inbuilt functions

max(1,2,3,4,-7,8)      # maximum

min(1,2,3,4,-7,8)      # minimum

abs(c(-1,-2,-3,4,5))   # absolute value

sqrt(c(4,9,16,25))     # square root

sum(c(2,3,5,7))        # sum

prod(c(2,3,5,7))       # product

round(1,23)            #roundoff
round(1.83) 

mode(x)



