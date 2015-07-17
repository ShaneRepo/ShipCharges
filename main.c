// A program that calculates shipping cost based on the weight of the item.

// Function prototypes.
float getPackageWeight(float packageWeight);
float calcShippingCharge(float packageWeight,float ratePerPound);
#include <stdio.h>


int main()
{
float packageWeight;
float ratePerPound;
float shippingCharge;

// Getting package weight from user.

    printf("\nEnter the weight of your package in pounds please : ");
        scanf("%f",&packageWeight);

// Calculating the rate per pound.

        if (packageWeight <=2)
        {
            ratePerPound = 1.10;
        }
            else if ((packageWeight > 2) && (packageWeight <= 7))
            {
                ratePerPound = 2.20;
            }
            else if ((packageWeight > 6) && (packageWeight<= 10))
            {
                ratePerPound = 3.70;
            }
            else
            {
                ratePerPound = 3.80;
            }
// Function call to calculate shipping charge.

        shippingCharge = calcShippingCharge(packageWeight,ratePerPound);

// Displaying results to the user.

    printf("\nThe total shipping charge is $%.2f", shippingCharge);


    return 0;
}

// Function to get the package weight.
    float getPackageWeight(float packageWeight)
    {
        scanf("%f",&packageWeight);
        return packageWeight;
    }

// Function to calculate the shipping cost.
    float calcShippingCharge(float packageWeight,float ratePerPound)
    {


          if (packageWeight <=2)
        {
            ratePerPound = 1.10;
        }
            else if ((packageWeight > 2) && (packageWeight <= 7))
            {
                ratePerPound = 2.20;
            }
            else if ((packageWeight > 6) && (packageWeight<= 10))
            {
                ratePerPound = 3.70;
            }
            else
            {
                ratePerPound = 3.80;
            }
            float shippingCharge = (packageWeight * ratePerPound);

        return shippingCharge;
    }










