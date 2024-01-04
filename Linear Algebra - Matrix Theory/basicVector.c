//Include Headers
#include <stdio.h>
#include <math.h>

//Define structure for vectors
typedef struct {
    int dimension;
    double *components;

} Vector; //structure name

//Initaialize a Vector
//Function used to create a vector with a specified dimension
Vector initailaizeVector(int dimension) {
    Vector v;
    v.dimension = dimension;
    v.components = (double *)mallac(dimension * sizeof(double));
    return v;
}

//Compute L1 Norm
//L1 norm of a vector is the sum of the absolute values of its components
double l1Norm(Vector v) {
    double norm = 0.0;
    for(int i = 0; i < v.dimension; i++) {
        norm += fabs(v.components[i]);
    }
    return norm;
}

//Compute L2 Norm
//L2 norm is the square root if the sum of the squares of its components.
double l2Norm(Vector v) {
    double norm = 0.0
    for(int i = 0; i < v.dimension; i++) {
        norm += v.components[i] * v.components[i];
    }
    return sqrt(norm);
} 

//Compute L-infinity Norm
//L-infinity norm is the maximum absolute value among the vector's components
double linfNorm(Vector v) {
    double norm = 0.0;
    for (int i = 0; i < v.dimension; i++) {
        double absComponent = fabs(v.components[i]);
        if (absComponent > norm) {
            norm = absComponent;
        }
    }
    return norm;
}

//Inner Products
//In Euclidean space, it's calculated as the sum of the products of their corresponding components.
//A scalar value that measures the similarity or alignment of the vectors
double innerProduct(Vector v1, Vector v2) {
    double product = 0.0;
    if (v1.dimension != v2.dimension) {
        printf("Error: Vectors must have the same dimension for inner product.\n");
        return 0.0; // Handle the error gracefully
    }
    for (int i = 0; i < v1.dimension; i++) {
        product += v1.components[i] * v2.components[i];
    }
    return product;
}

 //Linear Independence
 //if no vector in the set can be written as a linear combination of the others. 
 //One way to check for linear independence 
 //form a matrix with these vectors as rows and perform Gaussian elimination to check if the rank of the matrix equals the number of vectors.
//See File


// Function to check if two vectors are orthogonal
int areOrthogonal(Vector v1, Vector v2) {
    return innerProduct(v1, v2) == 0.0;
}

//
// Function to create a hyperplane from a normal vector
Vector createHyperplane(Vector normalVector, double constant) {
    Vector hyperplane = initializeVector(normalVector.dimension);
    for (int i = 0; i < normalVector.dimension; i++) {
        hyperplane.components[i] = normalVector.components[i];
    }
    // Set the last component as the constant (C)
    hyperplane.components[normalVector.dimension - 1] = constant;
    return hyperplane;
}




//main function
int main() {
    // Test the vector operations here
    // You can create vectors, compute norms, and perform other operations

    return 0;
}

