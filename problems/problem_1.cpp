void problemSolution1(float consumed_water) {
    float cost = 13;
    // write your code here
    cost += (consumed_water < 30) ? consumed_water * .4 : 30 * .4;
    consumed_water -= 30;
    if(consumed_water > 0){
        cost += (consumed_water < 20) ? consumed_water * .12 : 20 * .12;
        consumed_water -= 20;
        if(consumed_water > 0){
            cost += (consumed_water < 10) ? consumed_water * 1.4 : 10 * 1.2;
            consumed_water -= 10;
            if(consumed_water > 0){
                cost += consumed_water * 1.5;
            }
        }
    }
}
