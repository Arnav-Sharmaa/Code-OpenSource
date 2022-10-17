# Assignment can be done in two ways
x<-20
x=20

x^2->y # assigns the value of x^2 to y

# Methods for data input
# 1. c function
y<-c(1,2,3,9,15,17) # Stores the vector in y using c function

c(1,2,3,4)/2 # creating a vector of length 4 and dividing it by 2

c(1,2,3,4)/c(4,3,2,1) # Divides vector element by element

Names <- c("Bob","Jack")

# 2. Sequence operator and Sequence function

1:4

-1:2

2*1:15 # Create a vector of 1  to 15 and multiply with 2

seq(2,8,by=2) # specifies interval and increment

seq(0,1,length=11) # specifies iinterval and the number of element

seq(from = 1, to = 30)

seq(to=30, from=0)

# 3. Scan function
wt = scan()

# 4. Rep function

x<-c(rep(1,4),rep(2,2),rep(3,5),7,rep(9,2))

z<-c(rep(2,2),rep(9,4))

rep(x,each=4) # repeating each value of x 4 times

# Inbuilt functions
max(1.2,3.4,-7.8) # maximum

min(1.2,3.4,-7.8) # minimum

abs(c(-1,-2,-3,4,5))

sqrt(c(4,9,16))

sum(c(2,3,4,5))

prod(c(2,3,4,5))

round(1.23)

? plot

# plot a line quadratic and cubic function on the same plot for values of x in the range [0,2]
x<-seq(0,2,by=0.1)
y<-x
y1<-x^2
y2<-x^3
plot(x,y,"o",pch=1)
plot(x,y,"o",pch=1,lty=1)
plot(x,y,"o",pch=1,lty=1,xlab="")
plot(x,y,"o",pch=1,lty=1,xlab="",ylab="")
plot(x,y,"o",pch=1,lty=1,xlab="x axis",ylab="y axis")
plot(x,y,"o",pch=1,lty=1,xlab="",ylab="",ylim=range(0,max(y2)))
plot(x,y,"o",pch=1,lty=1,xlab="",ylab="",ylim=range(0,max(y2)),cex=0.7)
plot(x,y,"o",pch=1,lty=1,xlab="",ylab="",ylim=range(0,max(y2),cex=0.7,lwd=2))
lines(x,y1,"o",pch=".",lty=2)
lines(x,y2,"o",pch=".",lty=2)

#plot reciprocals and squares of reciprocals
x <- seq(0,2,by=0.1)

? barplot

# Annual sales are given as follows
# Year  1995  1996  1997  1998  1999  2000
# Sale  15.0  25.0  27.0  25.0  22.0  21.0

h <- c(15.0,25.0,27.0,25.0,22.0,21.0)
y <- c(1995,1996,1997,1998,1999,2000)
barplot(h,names.arg=y,xlab="Years",ylab="Annua sales",main="Sales")

#Pie Chart 
#Create data for the graph
x <-c(21,62,10,52)
labels <- c("London","New York","Singapore","Mumbai")

#Give the chart file a name
png(file = "city.png")

#Plot the chart
pie(x,labels)

dev.off()



