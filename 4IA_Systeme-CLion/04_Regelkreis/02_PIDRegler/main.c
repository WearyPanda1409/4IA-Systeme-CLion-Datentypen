#include <stdio.h>

const double t0 = 21;
const double dt = 60;
const double H = 30;
const double P = 2000;
const double C = 4000000;
const double ta = 12;
const double tw = 21;

const double Kp = 20.0;
const double Ki = 0.001;
const double Kd = 100.0;

double integral = 0;
double lastDiff = 0;

double t = 21;

double ein = 0;

double pid(void)
{
    double diff = tw - t;

    double p = Kp * diff;

    integral += diff * dt;
    double i = Ki * integral;

    double d = Kd * (diff - lastDiff) / dt;

    lastDiff = diff;

    double output = p + i + d;

    output /= 100.0;

    if (output > 1.0)
        output = 1.0;

    if (output < 0.0)
        output = 0.0;

    return output;
}

int main(void)
{
    lastDiff = tw - t;

    printf("Zeit [min];Temperatur [°C];Heizung [%%]\n");

    for (int n = 0; n < 24 * 60; n++)
    {
        ein = pid();

        t += ((P * ein - H * (t - ta)) * dt) / C;

        printf("%d;%.4f;%.2f\n", n, t, ein * 100);
    }

    return 0;
}