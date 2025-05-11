int sumOfGoodNumbers(int* nums, int numsSize, int k) {
    int soma=0;
    int test=0;
    for(int i=0;i<numsSize;i++){
        test=0;
        if(i-k>=0 && i-k<numsSize){
            if(nums[i]>nums[i-k]){
                test++;}
        }
        else{
            test++;
            }

        if(i+k<numsSize){
            if(nums[i]>nums[i+k]){
                test++;}
        }else{
            test++;
        }

        if(test==2){
            soma+=nums[i];
        }
        }
        return soma;
    }
