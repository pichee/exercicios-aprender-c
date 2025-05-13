//Given an array nums of integers, return how many of them contain an even number of digits.
int digits(int number){
    int tmp=0;
    if(number<10){
        return 1;
    }
    while(1){
        if(number/10<10){
            tmp++;
            break;
        }       
        number=number/10;
        tmp++;
    }
    tmp++;
    return tmp;
}
int findNumbers(int* nums, int numsSize) {

    int tmpPar=0;
    int tmpD=0;
    for(int i=0;i<numsSize;i++){
        tmpD=digits(nums[i]);
        if(tmpD%2==0){
            tmpPar++;
        }
    }
    return tmpPar;

}
