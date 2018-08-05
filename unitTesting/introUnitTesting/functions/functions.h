#ifndef FUNCTIONS_H
#define FUNCTIONS_H

typedef struct {
   float min;
   float max;
} minmax_t;

minmax_t findMinMax(const float data[], int size);
float averageData(const float data[], int size);
void setAverageData(float data[], int size, float average);
void setLimitData(float data[], int size, float min, float max);

#endif // FUNCTIONS_H
