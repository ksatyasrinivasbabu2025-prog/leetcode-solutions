int thirdMax(int* nums, int numsSize) {

    //Sort in descending order using Bubble Sort

    int flag, temp;

    for (int i = 0; i < numsSize - 1; i++) {
        flag = 0;

        for (int j = 0; j < numsSize - 1 - i; j++) {
            
            if (nums[j] < nums[j + 1]) {
                temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;

                flag = 1;
            }
        }

        if (flag == 0) { //no swap happened
            break;
        }
    }

    int k = 1; //else, it will remove the first element

    //first remove duplicates

    for (int i = 0; i < numsSize - 1; i++) {
        //numsize - 1, because the last no. has nothing ahead to compare with
        if (nums[i] != nums [i + 1]) {
            nums[k] = nums [i + 1];
            k++;
        }
    }

    if (k <=2) {
        return nums[0];
    }

    return nums[2];
}