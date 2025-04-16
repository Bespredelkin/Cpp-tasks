#include <iostream>
using namespace std;

struct Vector3D {
    double x, y, z;
};


void multiply(Vector3D* v, double a) {
    v->x = v->x * a;
    v->y = v->y * a;
    v->z = v->z * a;
}
double dot(Vector3D* v, Vector3D* u) {
    double scal = v->x * u->x + v->y * u->y + v->z * u->z;
    return scal;
}
void vectmult(Vector3D* v, Vector3D* u, Vector3D* z) {
    z->x = v->y * u->z - v->z * u->y;
    z->y = -v->x * u->z + v->z * u->x;
    z->z = v->x * u->y - v->y * u->x;
}
void Print(Vector3D* v) {
    cout << v->x << " " << v->y << " " << v->z << endl;
}

int main(void)
{
    double a = 4.0;
    Vector3D v{ .x = 2.0, .y = 1.0 , .z = 2.0 };
    Vector3D u{ .x = 6.0, .y = 3.0 , .z = 1.0 };
    Vector3D z{ .x = 0.0, .y = 0.0 , .z = 0.0 };
    multiply(&v, a);
    Print(&v);
    dot(&v, &u);
    cout << dot(&v, &u) << endl;
    vectmult(&v, &u, &z);
    Print(&z);
    return 0;

}