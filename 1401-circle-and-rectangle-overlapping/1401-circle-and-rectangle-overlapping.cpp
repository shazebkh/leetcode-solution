class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
         /*
            Idea:
            We need to find the closest point of the rectangle
            to the center of the circle.

            If the distance between these two points is <= radius,
            then the circle and rectangle overlap.
        */
         /*
            If xCenter is:
            
            1. Inside [x1, x2]
               -> closestX = xCenter

            2. Left of x1
               -> closestX = x1

            3. Right of x2
               -> closestX = x2

            max(x1, min(xCenter, x2)) does exactly this.
        */
        int closestX = max(x1, min(xCenter, x2));
        // Same procedure for yCentre.
        // We find the closest Y-coordinate on the rectangle
        // to the circle's center.
        int closestY = max(y1, min(yCenter, y2));
        /*
            Now we have:

            Circle center = (xCenter, yCenter)
            Closest rectangle point = (closestX, closestY)

            Calculate the difference in X and Y.
        */
        int dx = xCenter - closestX;
        int dy = yCenter - closestY;
        //Here we use the circle quation x^2+y^2=r^2
        return dx * dx + dy * dy <= radius * radius;
    }
};