#ifndef FUNCTIONS_H
#define FUNCTIONS_H

/** Contains a minimal value \p min and a related maximal value \p max. */
typedef struct {
   float min;
   float max;
} minmax_t;

/** Finds the minimal and maximal value in an array,
 * \return the minimal and maximal value in a minmax_t struct.
 */
minmax_t findMinMax(const float data[], int size);

/** Calulates the average of all values in an input array \p data.
 * \return the average value.
 */
float averageData(const float data[], int size);

/**
 * Resets all the values in the input array \p data so that the average
 * becomes equal to the value of \p average.
 *
 * \pre size >= 1
 * \param data input array
 * \param size number of data array elements
 * \param average demanded average value
 */
void setAverageData(float data[], int size, float average);

/**
 * Converts all values in the input array \p data so that the minimnal and
 * maximal value becomes equal to \p min and \p max. This conversion
 * function uses scaling (multiplication by A) and adds an offset (B) to
 * the input values:
 *
 * \f$ data[i] = A * data[i] + B \f$
 *
 * A and B are calculated by solving 2 equations using the actual min and
 * max values in the input data and the demanded \p min and \p max values
 * for the calculated result in \p data.
 *
 * \f$ min = A *  data\ actual\ min + B \f$
 *
 * \f$ max = A *  data\ actual\ max + B \f$
 *
 * \pre size >= 1 AND actual min < actual max AND \p min < \p max
 * \param data input array
 * \param size number of data array elements
 * \param min minimal value
 * \param max maximal value
 */
void setLimitData(float data[], int size, float min, float max);

#endif // FUNCTIONS_H
