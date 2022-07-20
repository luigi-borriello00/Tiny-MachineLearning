#include<cmath>
class vector3d
{
private:
    
public:
    float x, y, z;

    float * calculateDistance3d(vector3d *last){
        float * distance = new float[3];
        distance[0] = x - last->x;
        distance[1] = y - last->y;
        distance[2] = z - last->z;
        return distance;
    }
    vector3d(float x1, float y1, float z1){
        x = x1;
        y = y1;
        z = z1;
    }
    vector3d(){
        x = 0;
        y = 0;
        z = 0;
    }
    ~vector3d();
};


