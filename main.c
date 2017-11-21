#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{
	double Amplitude[9] = {10.0,0.0,3.5,0.0,2.0,0.0,1.5,0.0,0.0};
    double Voltage = 0.0;
    int index = 0;
    float Calc_Result[9];
    float Freq = 1000;
    float time = 0.000001;
    
    for(index=0;index<9;index++)
    {
        Calc_Result[index] = (2*M_PI*((index+1)*Freq))*time;
        Calc_Result[index] = Amplitude[index]*sin(Calc_Result[index]);
      //  printf("Results = %3.6f\r\n",Calc_Result[index]);
    }
    
    for(index=0;index<9;index++)
    {
        Voltage += Calc_Result[index];
    }
    printf("Voltage = %3.6f\r\n",Voltage);
	return 0;
}
