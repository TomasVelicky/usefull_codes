bool areaBoomerang(int x1, int y1, int x2, int y2, int x3, int y3) {
    return (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) != 0;
}

bool isBoomerang(int** points, int pointsSize, int* pointsColSize) {

    for(int i = 0; i < pointsSize; i++){
        for(int j = i+1; j < pointsSize; j++){
            for(int k = j+1; k < pointsSize; k++){
                if( areaBoomerang(points[i][0], points[i][1], 
                                points[j][0], points[j][1], 
                                points[k][0], points[k][1]) ) return true;
            }
        }
    }

    return false;
}
