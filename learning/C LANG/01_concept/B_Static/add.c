static int count;

int increment(){
    count = count + 1;
    return count;
}


// the count is not visible outside the scope due to static keyword we can use it in this file