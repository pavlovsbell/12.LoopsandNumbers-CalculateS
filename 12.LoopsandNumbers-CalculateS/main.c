//
//  main.c
//  CalculateS
//
//  Created by Julianne on 11/01/2016.
//  Copyright (c) 2016 Julianne. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int sume = 0;
    
    for (int s = 1; s <= 100; s++)
    {
        sume = sume + s;
    }
    
    printf("%i\n", sume);
    
    
    
    int sumf = 0;
    
    for (int s = -1; s >= -200; s--)
    {
        sumf = sumf + s;
    }
    
    printf("%i\n", sumf);
    
    
    
    float sumg = 0;
    
    for (float s = 2.0; s <= 100.0; s++)
    {
        float i = 1 / s;
        sumg = sumg + i;
    }
    
    printf("%f\n", sumg);
    
    
    
    int sumh = 0;
    
    for (int s = 1; s <= 100; s++)
    {
        sumh = sumh + s*s;
    }
    
    printf("%i\n", sumh);
    
    
    
    float sumi = 0;
    
    for (float s = 2.0; s <= 99.0; s++)
    {
        float f = 1 / (s * (s + 1));
        sumi = sumi + f;
    }
    
    printf("%f\n", sumi);
    
    
    
    float sumj = 0;
    
    for (float s = 3.0; s <= 95.0; s = s + 4)
    {
        float k = 1 / (s * (s + 2));
        sumj = sumj + k;
    }
    
    printf("%f\n", sumj);
    
    
    return 0;
}
