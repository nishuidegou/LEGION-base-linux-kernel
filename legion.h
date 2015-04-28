/*
 *
 */
#ifndef __LEGION_H
#define __LEGION_H

typedef struct{
 double x;   // value of oscillator
 double rou; // gaussian noise term
 double i;   // input stimulation
 double s;   // coupling from other oscillators
}Oscillator_Struct;

typedef struct{
 double ata;
 double gama;
 double beta;
}Inhibitory_Struct;







#endif








