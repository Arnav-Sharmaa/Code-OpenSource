x <-c(21,62,10,53)
labels <- c("London","New York", "Singapore", "Mumbai")

png(file = "city.png")

pie(x,labels)

dev.off()

