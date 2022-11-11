#include <stdio.h>

float bricks(float area)
{
    float bricks;
    bricks = area * 100;
    return bricks;
}

float bricks_cost(float bricks)
{
    float bricks_cost, size;

    if (size == 4)
    {
        bricks_cost = bricks * 6;
        printf("Bricks Cost \t: Rs.%f \n", bricks_cost);
    }
    else if (size == 6)
    {
        bricks_cost = bricks * 8;
        printf("Bricks Cost \t: Rs.%f \n", bricks_cost);
    }
}

float sand(int area)
{
    float sand;
    sand = area *0.01;
    return sand;
}

float sand_cost(float sand)
{
    float sand_cost = sand * 7000;
    printf("Sand Cost \t: Rs.%f\n", sand_cost);
}

float metal(int area)
{
    float metal;
    metal = area * 0.02;
    return metal;
}

float metal_cost(float metal)
{
    float metal_cost = metal * 3000;
    printf("Metal Cost \t: Rs.%f\n", metal_cost);
}

float cement(int area)
{
    float cement;
    cement = (area * 0.25);
    return cement;
}

float cement_cost(float cement)
{
    float cement_cost = cement * 400;
    printf("Cement Cost \t: Rs.%f\n", cement_cost);
}

float steel(float area)
{
    float steel;
    steel = (0.05 * area);
    return steel;
}

float steel_cost(float steel)
{
    float steel_cost = steel * 60;
    printf("\nSteel Cost (Kg): Rs.%f\n", steel_cost);
    return steel_cost;
}

float paint_cost(float area)
{
    float paint;
    paint = (area * 10);
    printf("Paint Cost \t: Rs.%f", paint);
    return paint;
}
float tiles_area;
float tiles_num(float area, int t_ch)
{
    float tiles_number_A, tiles_number_B, tiles_number_C;
    switch (t_ch)
    {
    case 1:
        tiles_area = 1;
        tiles_number_A = (area * 100) / 100;
        return tiles_number_A;
        break;
    case 2:
        tiles_area = 1.5;
        tiles_number_B = (area * 66.66) / 100;
        return tiles_number_B;
        break;
    case 3:
        tiles_area = 4;
        tiles_number_C = (area * 25) / 100;
        return tiles_number_C;
        break;
    default:
        printf("\nEnter valid input....");
        break;
    }
}
float tiles_cost(float tiles_num)
{
    if (tiles_area == 1)
    {
        printf("\nTiles Cost \t: Rs.%f", tiles_num * 35);
        return (tiles_num * 35);
    }
    else if (tiles_area == 1.5)
    {
        printf("\nTiles Cost \t: Rs.%f", tiles_num * 55);
        return (tiles_num * 55);
    }
    else if (tiles_area == 4)
    {
        printf("\nTiles Cost \t: Rs.%f", tiles_num * 125);
        return (tiles_num * 125);
    }
}

float paint_quantity_f(float area)
{
    float paint_quantity;
    paint_quantity = area / 50;
    return paint_quantity;
}

float rcc_cost(float area)
{
	int rcc;
	rcc=area*176;
	printf("\nRCC Cost is \t:%f \n",rcc);
	return rcc;
}
int room()
{
    printf("Enter The dimensions of Room in Feet and Inches \n");
    float length, breadth, area, height;
    printf("Enter the length of Room : \n");
    scanf("%f", &length);
    printf("Enter the Breadth of Room : \n");
    scanf("%f", &breadth);
    printf("Enter the Height of Room : \n");
    scanf("%f", &height);
    area = length * breadth * height;

    // taking input
    int brick_size, tiles_size, t_ch;
    printf("Enter the Size of Brick (6 or 4 inches):\n");
    scanf("%f", &brick_size);

    printf("\nEnter The Size of Tiles (in feet) Press 1.1X1 2.1X1.5 3.2X2\n");
    scanf("%d", &t_ch);
    int choice;
    do
    {
        printf("\nEnter the 1.Material and 2.Cost Material Calculator 3.Exit: \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Material Calculator \n");
            printf("Bricks Required (Nag) \t: %f\n", bricks(area));
            printf("Sand Required (Brass) \t: %f\n", sand(area));
            printf("Cement Required (Bags) \t: %f\n", cement(area));
            printf("Metal Required (Brass) \t: %f\n", metal(area));
            printf("Paint Required (Litres)\t: %f\n", paint_quantity_f(area));
            printf("Tiles Required  (Nag)  \t: %f\n", tiles_num(area, t_ch));
            printf("Steel Required (KG)    \t: %f\n", steel(area));
            break;
        case 2:
            printf("Cost Calculator\n");
            float a,b,c,d,total;
            int e,f,g;
            a=bricks_cost(bricks(area));
            b=sand_cost(sand(area));
            c=cement_cost(cement(area));
            d=metal_cost(metal(area));
            e=paint_cost(area);
            f=tiles_cost(tiles_num(area, t_ch));
            g=steel_cost(steel(area));
            total = a+b+c+d+e+f+g;
            printf("\nTotal Cost \t: Rs.%f\n",total);
            return total;
            break;

        case 3:
            printf("Exiting....");
            break;
        default:
            printf("Enter Valid input\n");
            break;
        }
    } while (choice != 3);
    
}
void main()
{
    int main_in, choice, t_ch, brick_size, ch_main, nr, i,total_house;
    int a1,b1,c1,d1,e1,f1,g1,h1,i1,j1,k1;
    float length, breadth, area, height;
    do
    {
        printf("\n*****************************************Welcome to Civil Estimator***************************************** \n");
        printf("What type of work do you want to do?\n");
        printf("1.Built Wall 2.Flooring Tiles Work 3.Painting 4.Built a Room 5.Built a House 6.RCC 7.Exit \n");
        scanf("%d", &main_in);
        switch (main_in)
        {
        case 1:
            printf("Wall Building work\n");
            printf("Enter The dimensions of Wall in Feet and Inches \n");
            printf("Enter the length of Room : \n");
            scanf("%f", &length);
            printf("Enter the Height of Room : \n");
            scanf("%f", &height);
            area = length * height;
            printf("Enter the Size of Brick (6 or 4 inches):\n");
            scanf("%f", &brick_size);
            do
            {
                printf("\nEnter the 1.Material and 2.Cost Material Calculator 3.Exit: \n");
                scanf("%d", &choice);
                switch (choice)
                {
                case 1:
                    printf("Material Calculator \n");
                    printf("Bricks required (Nag) \t: %f\n", bricks(area));
                    printf("Sand required (Brass) \t: %f\n", sand(area));
                    printf("Cement required (Bags) \t: %f\n", cement(area));
                    printf("Metal required (Brass) \t: %f\n", metal(area));
                    break;
                case 2:
                    printf("Cost Calculator\n");
                    bricks_cost(bricks(area));
                    sand_cost(sand(area));
                    cement_cost(cement(area));
                    metal_cost(metal(area));
                    break;

                case 3:
                    printf("Exiting....");
                    break;
                default:
                    printf("Enter Valid input\n");
                    break;
                }
            } while (choice != 3);
            break;

        case 2:
            printf("Flooring Tiles work\n");
            printf("Enter The dimensions of Room in Feet and Inches \n");
            printf("Enter the length of Room : \n");
            scanf("%f", &length);
            printf("Enter the Breadth of Room : \n");
            scanf("%f", &breadth);
            area = length * breadth;
            printf("\nEnter The Tiles Size (in feet) Press 1.1X1 2.1X1.5 3.2X2\n");
            scanf("%d", &t_ch);
            do
            {
                printf("\nEnter the 1.Material and 2.Cost Material Calculator 3.Exit: \n");
                scanf("%d", &choice);
                switch (choice)
                {
                case 1:
                    printf("Material Calculator \n");
                    printf("Sand required (Brass) \t: %f\n", sand(area));
                    printf("Cement required (Bags) \t: %f\n", cement(area));
                    printf("Tiles Required        \t: %f\n", tiles_num(area, t_ch));
                    break;
                case 2:
                    printf("Cost Calculator\n");
                    bricks_cost(bricks(area));
                    sand_cost(sand(area));
                    cement_cost(cement(area));
                    metal_cost(metal(area));
                    paint_cost(area);
                    tiles_cost(tiles_num(area, t_ch));
                    break;

                case 3:
                    printf("Exiting....");
                    break;
                default:
                    printf("Enter Valid input\n");
                    break;
                }
            } while (choice != 3);
            break;

        case 3:
            printf("Painting work\n");
            printf("Enter The dimensions of Room in Feet and Inches \n");
            printf("Enter the length of Room : \n");
            scanf("%f", &length);
            printf("Enter the Breadth of Room : \n");
            scanf("%f", &breadth);
            printf("Enter the Height of Room : \n");
            scanf("%f", &height);
            area = length * height * breadth;
            do
            {
                printf("\nEnter the 1.Material and 2.Cost Material Calculator 3.Exit: \n");
                scanf("%d", &choice);
                switch (choice)
                {
                case 1:
                    printf("Material Calculator \n");
                    printf("Paint Required (In litres) \t:%f\n", paint_quantity_f(area));
                    break;
                case 2:
                    printf("Cost Calculator\n");
                    paint_cost(area);
                    break;

                case 3:
                    printf("Exiting....");
                    break;
                default:
                    printf("Enter Valid input\n");
                    break;
                }
            } while (choice != 3);
            break;

        case 4:
            room();
            break;

        case 5:
            
            printf("\nEnter number of room:");
            scanf("%d", &nr);
            if (nr == 1)
            {
                a1=room();
                printf("\n\n\nTotal House Cost \t: %d\n",a1);
            }
            else if (nr == 2)
            {
                a1=room();
                printf("\nEnter for 2nd room\n");
                b1=room();
                printf("\n\n\nTotal House Cost \t: Rs.%d\n",a1+b1);
            }
            else if (nr == 3)
            {
                a1=room();
                printf("\nEnter for 2nd room\n");
                b1=room();
                printf("\nEnter for 3rd room\n");
                c1=room();
                printf("\n\n\nTotal House Cost \t: Rs.%d\n",a1+b1+c1);
            }
            else if (nr == 4)
            {
                a1=room();
                printf("\nEnter for 2nd room\n");
                b1=room();
                printf("\nEnter for 3rd room\n");
                c1=room();
                printf("\nEnter for 4th room\n");
                d1=room();
                printf("\n\n\nTotal House Cost \t: Rs.%d\n",a1+b1+c1+d1);
            }
            else if (nr == 5)
            {
                a1=room();
                printf("\nEnter for 2nd room\n");
                b1=room();
                printf("\nEnter for 3rd room\n");
                c1=room();
                printf("\nEnter for 4th room\n");
                d1=room();
                printf("\nEnter for 5th room\n");
                e1=room();
                printf("\n\n\nTotal House Cost \t: Rs.%d\n",a1+b1+c1+d1+e1);
            }
            else if (nr == 6)
            {
                a1=room();
                printf("\n Enter for 2nd room\n");
                b1=room();
                printf("\n Enter for 3rd room\n");
                c1=room();
                printf("\n Enter for 4th room\n");
                d1=room();
                printf("\n Enter for 5th room\n");
                e1=room();
                printf("\n Enter for 6th room\n");
                f1=room();
                printf("\n\n\nTotal House Cost \t: Rs.%d",a1+b1+c1+d1+e1+f1);
            }
            
            break;
            

        case 6:
            printf("RCC work\n");
            printf("Enter The dimensions in Feet and Inches \n");
            printf("Enter the length: \n");
            scanf("%f", &length);
            printf("Enter the Breadth: \n");
            scanf("%f", &breadth);
            area = length * breadth;
            do
            {
                printf("\nEnter the 1.Material and 2.Cost Material Calculator 3.Exit: \n");
                scanf("%d", &choice);
                switch (choice)
                {
                case 1:
                    printf("Material Calculator \n");
                    printf("Sand required (Brass) \t: %f\n", sand(area));
                    printf("Cement required (Bags) \t: %f\n", cement(area));
                    printf("Metal required (Brass) \t: %f\n", metal(area));
                    printf("Steel Required (KG)    \t: %f\n", steel(area));
                    break;
                case 2:
                    printf("Cost Calculator\n");
                    sand_cost(sand(area));
                    cement_cost(cement(area));
                    metal_cost(metal(area));
                    steel_cost(area);
                    break;

                case 3:
                    printf("Exiting....");
                    break;
                default:
                    printf("Enter Valid input\n");
                    break;
                }
            } while (choice != 3);
            break;


        case 7:
            printf("Exiting.....\n");
            break;

        default:
            printf("Enter valid input...\n");
            break;
        }
    } while (main_in != 7);
}

