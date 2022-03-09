class Point{
    public:
        Point();
        Point(double xVal, double yVal);
        //Accesors
        /*double getX();
        double getY();
        //Mutators
        void setX(double xVal);
        void setY(double yVal);*/
        void print();
        double calcDistance(Point other);
    private:
        double x;
        double y;
};
