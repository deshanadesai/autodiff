void compute(double values[], int num_points, double ders[]){

	for(int i = 0; i < num_points; ++i)
	{
		double k = values[i* 2 + 0 ];
		double j = values[i* 2 + 1 ];
		ders[i*4+0]= ((((((((k * k) * (((((((k * 1) + (k * 1)) + ((k * 0) + (3 * 1))) - (((4 * 1) - (k * 0)) / (4 * 4))) * (1) + k * ((((((((1 * (1) + k * (0))) + ((1 * (1) + k * (0))))) + ((((0 * (1) + k * (0))) + ((1 * (0) + 3 * (0))))))) - (((4 * 4) * (((1 * (0) + 4 * (0))) - ((0 * (1) + k * (0)))) - ((4 * 1) - (k * 0)) * (4 * (0) + 4 * (0)))/ ((4 * 4) * (4 * 4))))))) - ((1 * ((((((k * (1) + k * (1))) + ((k * (0) + 3 * (1))))) - ((4 * 1 - k * 0)/ (4 * 4)))) + (((k * k) + (3 * k)) - (k / 4)) * (0)))) - ((k * ((((k * 1) + (k * 1)) + ((k * 0) + (3 * 1))) - (((4 * 1) - (k * 0)) / (4 * 4)))) - ((((k * k) + (3 * k)) - (k / 4)) * 1)) * (k * (1) + k * (1)))/ ((k * k) * (k * k))) + ((((((k * ((k * 1) + (k * 1))) + ((k * k) * 1)) * (1) + k * ((((((k * 1) + (k * 1)) * (1) + k * ((((1 * (1) + k * (0))) + ((1 * (1) + k * (0))))))) + ((1 * ((k * (1) + k * (1))) + (k * k) * (0))))))) + ((1 * ((k * ((k * (1) + k * (1))) + (k * k) * (1))) + ((k * k) * k) * (0))))))) + ((((((k * 1) + (k * 1)) * ((k * ((7 * 0 - 22 * 0)/ (7 * 7)) + (22 / 7) * (1))) + ((22 / 7) * k) * ((((1 * (1) + k * (0))) + ((1 * (1) + k * (0))))))) + ((((k * (((7 * 0) - (22 * 0)) / (7 * 7))) + ((22 / 7) * 1)) * ((k * (1) + k * (1))) + (k * k) * (((((((7 * 0) - (22 * 0)) / (7 * 7)) * (1) + k * (((7 * 7) * (((0 * (0) + 7 * (0))) - ((0 * (0) + 22 * (0)))) - ((7 * 0) - (22 * 0)) * (7 * (0) + 7 * (0)))/ ((7 * 7) * (7 * 7))))) + ((1 * ((7 * 0 - 22 * 0)/ (7 * 7)) + (22 / 7) * (0))))))))))) + ((((((k * ((k * ((k * ((k * ((k * ((k * ((k * ((k * 1) + (k * 1))) + ((k * k) * 1))) + (((k * k) * k) * 1))) + ((((k * k) * k) * k) * 1))) + (((((k * k) * k) * k) * k) * 1))) + ((((((k * k) * k) * k) * k) * k) * 1))) + (((((((k * k) * k) * k) * k) * k) * k) * 1))) + ((((((((k * k) * k) * k) * k) * k) * k) * k) * 1)) * (0) + j * ((((((k * ((k * ((k * ((k * ((k * ((k * ((k * 1) + (k * 1))) + ((k * k) * 1))) + (((k * k) * k) * 1))) + ((((k * k) * k) * k) * 1))) + (((((k * k) * k) * k) * k) * 1))) + ((((((k * k) * k) * k) * k) * k) * 1))) + (((((((k * k) * k) * k) * k) * k) * k) * 1)) * (1) + k * ((((((k * ((k * ((k * ((k * ((k * ((k * 1) + (k * 1))) + ((k * k) * 1))) + (((k * k) * k) * 1))) + ((((k * k) * k) * k) * 1))) + (((((k * k) * k) * k) * k) * 1))) + ((((((k * k) * k) * k) * k) * k) * 1)) * (1) + k * ((((((k * ((k * ((k * ((k * ((k * 1) + (k * 1))) + ((k * k) * 1))) + (((k * k) * k) * 1))) + ((((k * k) * k) * k) * 1))) + (((((k * k) * k) * k) * k) * 1)) * (1) + k * ((((((k * ((k * ((k * ((k * 1) + (k * 1))) + ((k * k) * 1))) + (((k * k) * k) * 1))) + ((((k * k) * k) * k) * 1)) * (1) + k * ((((((k * ((k * ((k * 1) + (k * 1))) + ((k * k) * 1))) + (((k * k) * k) * 1)) * (1) + k * ((((((k * ((k * 1) + (k * 1))) + ((k * k) * 1)) * (1) + k * ((((((k * 1) + (k * 1)) * (1) + k * ((((1 * (1) + k * (0))) + ((1 * (1) + k * (0))))))) + ((1 * ((k * (1) + k * (1))) + (k * k) * (0))))))) + ((1 * ((k * ((k * (1) + k * (1))) + (k * k) * (1))) + ((k * k) * k) * (0))))))) + ((1 * ((k * ((k * ((k * (1) + k * (1))) + (k * k) * (1))) + ((k * k) * k) * (1))) + (((k * k) * k) * k) * (0))))))) + ((1 * ((k * ((k * ((k * ((k * (1) + k * (1))) + (k * k) * (1))) + ((k * k) * k) * (1))) + (((k * k) * k) * k) * (1))) + ((((k * k) * k) * k) * k) * (0))))))) + ((1 * ((k * ((k * ((k * ((k * ((k * (1) + k * (1))) + (k * k) * (1))) + ((k * k) * k) * (1))) + (((k * k) * k) * k) * (1))) + ((((k * k) * k) * k) * k) * (1))) + (((((k * k) * k) * k) * k) * k) * (0))))))) + ((1 * ((k * ((k * ((k * ((k * ((k * ((k * (1) + k * (1))) + (k * k) * (1))) + ((k * k) * k) * (1))) + (((k * k) * k) * k) * (1))) + ((((k * k) * k) * k) * k) * (1))) + (((((k * k) * k) * k) * k) * k) * (1))) + ((((((k * k) * k) * k) * k) * k) * k) * (0))))))) + ((1 * ((k * ((k * ((k * ((k * ((k * ((k * ((k * (1) + k * (1))) + (k * k) * (1))) + ((k * k) * k) * (1))) + (((k * k) * k) * k) * (1))) + ((((k * k) * k) * k) * k) * (1))) + (((((k * k) * k) * k) * k) * k) * (1))) + ((((((k * k) * k) * k) * k) * k) * k) * (1))) + (((((((k * k) * k) * k) * k) * k) * k) * k) * (0))))))) + ((0 * ((k * ((k * ((k * ((k * ((k * ((k * ((k * ((k * (1) + k * (1))) + (k * k) * (1))) + ((k * k) * k) * (1))) + (((k * k) * k) * k) * (1))) + ((((k * k) * k) * k) * k) * (1))) + (((((k * k) * k) * k) * k) * k) * (1))) + ((((((k * k) * k) * k) * k) * k) * k) * (1))) + (((((((k * k) * k) * k) * k) * k) * k) * k) * (1))) + ((((((((k * k) * k) * k) * k) * k) * k) * k) * k) * (0)))))); // df/(dkdk) 
		ders[i*4+1]= ((((((((k * k) * (((((((k * 1) + (k * 1)) + ((k * 0) + (3 * 1))) - (((4 * 1) - (k * 0)) / (4 * 4))) * (0) + k * ((((((((1 * (0) + k * (0))) + ((1 * (0) + k * (0))))) + ((((0 * (0) + k * (0))) + ((1 * (0) + 3 * (0))))))) - (((4 * 4) * (((1 * (0) + 4 * (0))) - ((0 * (0) + k * (0)))) - ((4 * 1) - (k * 0)) * (4 * (0) + 4 * (0)))/ ((4 * 4) * (4 * 4))))))) - ((1 * ((((((k * (0) + k * (0))) + ((k * (0) + 3 * (0))))) - ((4 * 0 - k * 0)/ (4 * 4)))) + (((k * k) + (3 * k)) - (k / 4)) * (0)))) - ((k * ((((k * 1) + (k * 1)) + ((k * 0) + (3 * 1))) - (((4 * 1) - (k * 0)) / (4 * 4)))) - ((((k * k) + (3 * k)) - (k / 4)) * 1)) * (k * (0) + k * (0)))/ ((k * k) * (k * k))) + ((((((k * ((k * 1) + (k * 1))) + ((k * k) * 1)) * (0) + k * ((((((k * 1) + (k * 1)) * (0) + k * ((((1 * (0) + k * (0))) + ((1 * (0) + k * (0))))))) + ((1 * ((k * (0) + k * (0))) + (k * k) * (0))))))) + ((1 * ((k * ((k * (0) + k * (0))) + (k * k) * (0))) + ((k * k) * k) * (0))))))) + ((((((k * 1) + (k * 1)) * ((k * ((7 * 0 - 22 * 0)/ (7 * 7)) + (22 / 7) * (0))) + ((22 / 7) * k) * ((((1 * (0) + k * (0))) + ((1 * (0) + k * (0))))))) + ((((k * (((7 * 0) - (22 * 0)) / (7 * 7))) + ((22 / 7) * 1)) * ((k * (0) + k * (0))) + (k * k) * (((((((7 * 0) - (22 * 0)) / (7 * 7)) * (0) + k * (((7 * 7) * (((0 * (0) + 7 * (0))) - ((0 * (0) + 22 * (0)))) - ((7 * 0) - (22 * 0)) * (7 * (0) + 7 * (0)))/ ((7 * 7) * (7 * 7))))) + ((1 * ((7 * 0 - 22 * 0)/ (7 * 7)) + (22 / 7) * (0))))))))))) + ((((((k * ((k * ((k * ((k * ((k * ((k * ((k * ((k * 1) + (k * 1))) + ((k * k) * 1))) + (((k * k) * k) * 1))) + ((((k * k) * k) * k) * 1))) + (((((k * k) * k) * k) * k) * 1))) + ((((((k * k) * k) * k) * k) * k) * 1))) + (((((((k * k) * k) * k) * k) * k) * k) * 1))) + ((((((((k * k) * k) * k) * k) * k) * k) * k) * 1)) * (1) + j * ((((((k * ((k * ((k * ((k * ((k * ((k * ((k * 1) + (k * 1))) + ((k * k) * 1))) + (((k * k) * k) * 1))) + ((((k * k) * k) * k) * 1))) + (((((k * k) * k) * k) * k) * 1))) + ((((((k * k) * k) * k) * k) * k) * 1))) + (((((((k * k) * k) * k) * k) * k) * k) * 1)) * (0) + k * ((((((k * ((k * ((k * ((k * ((k * ((k * 1) + (k * 1))) + ((k * k) * 1))) + (((k * k) * k) * 1))) + ((((k * k) * k) * k) * 1))) + (((((k * k) * k) * k) * k) * 1))) + ((((((k * k) * k) * k) * k) * k) * 1)) * (0) + k * ((((((k * ((k * ((k * ((k * ((k * 1) + (k * 1))) + ((k * k) * 1))) + (((k * k) * k) * 1))) + ((((k * k) * k) * k) * 1))) + (((((k * k) * k) * k) * k) * 1)) * (0) + k * ((((((k * ((k * ((k * ((k * 1) + (k * 1))) + ((k * k) * 1))) + (((k * k) * k) * 1))) + ((((k * k) * k) * k) * 1)) * (0) + k * ((((((k * ((k * ((k * 1) + (k * 1))) + ((k * k) * 1))) + (((k * k) * k) * 1)) * (0) + k * ((((((k * ((k * 1) + (k * 1))) + ((k * k) * 1)) * (0) + k * ((((((k * 1) + (k * 1)) * (0) + k * ((((1 * (0) + k * (0))) + ((1 * (0) + k * (0))))))) + ((1 * ((k * (0) + k * (0))) + (k * k) * (0))))))) + ((1 * ((k * ((k * (0) + k * (0))) + (k * k) * (0))) + ((k * k) * k) * (0))))))) + ((1 * ((k * ((k * ((k * (0) + k * (0))) + (k * k) * (0))) + ((k * k) * k) * (0))) + (((k * k) * k) * k) * (0))))))) + ((1 * ((k * ((k * ((k * ((k * (0) + k * (0))) + (k * k) * (0))) + ((k * k) * k) * (0))) + (((k * k) * k) * k) * (0))) + ((((k * k) * k) * k) * k) * (0))))))) + ((1 * ((k * ((k * ((k * ((k * ((k * (0) + k * (0))) + (k * k) * (0))) + ((k * k) * k) * (0))) + (((k * k) * k) * k) * (0))) + ((((k * k) * k) * k) * k) * (0))) + (((((k * k) * k) * k) * k) * k) * (0))))))) + ((1 * ((k * ((k * ((k * ((k * ((k * ((k * (0) + k * (0))) + (k * k) * (0))) + ((k * k) * k) * (0))) + (((k * k) * k) * k) * (0))) + ((((k * k) * k) * k) * k) * (0))) + (((((k * k) * k) * k) * k) * k) * (0))) + ((((((k * k) * k) * k) * k) * k) * k) * (0))))))) + ((1 * ((k * ((k * ((k * ((k * ((k * ((k * ((k * (0) + k * (0))) + (k * k) * (0))) + ((k * k) * k) * (0))) + (((k * k) * k) * k) * (0))) + ((((k * k) * k) * k) * k) * (0))) + (((((k * k) * k) * k) * k) * k) * (0))) + ((((((k * k) * k) * k) * k) * k) * k) * (0))) + (((((((k * k) * k) * k) * k) * k) * k) * k) * (0))))))) + ((0 * ((k * ((k * ((k * ((k * ((k * ((k * ((k * ((k * (0) + k * (0))) + (k * k) * (0))) + ((k * k) * k) * (0))) + (((k * k) * k) * k) * (0))) + ((((k * k) * k) * k) * k) * (0))) + (((((k * k) * k) * k) * k) * k) * (0))) + ((((((k * k) * k) * k) * k) * k) * k) * (0))) + (((((((k * k) * k) * k) * k) * k) * k) * k) * (0))) + ((((((((k * k) * k) * k) * k) * k) * k) * k) * k) * (0)))))); // df/(dkdj) 
		ders[i*4+2]= ((((((((k * k) * (((((((k * 0) + (k * 0)) + ((k * 0) + (3 * 0))) - (((4 * 0) - (k * 0)) / (4 * 4))) * (0) + k * ((((((((0 * (0) + k * (0))) + ((0 * (0) + k * (0))))) + ((((0 * (0) + k * (0))) + ((0 * (0) + 3 * (0))))))) - (((4 * 4) * (((0 * (0) + 4 * (0))) - ((0 * (0) + k * (0)))) - ((4 * 0) - (k * 0)) * (4 * (0) + 4 * (0)))/ ((4 * 4) * (4 * 4))))))) - ((0 * ((((((k * (0) + k * (0))) + ((k * (0) + 3 * (0))))) - ((4 * 0 - k * 0)/ (4 * 4)))) + (((k * k) + (3 * k)) - (k / 4)) * (0)))) - ((k * ((((k * 0) + (k * 0)) + ((k * 0) + (3 * 0))) - (((4 * 0) - (k * 0)) / (4 * 4)))) - ((((k * k) + (3 * k)) - (k / 4)) * 0)) * (k * (0) + k * (0)))/ ((k * k) * (k * k))) + ((((((k * ((k * 0) + (k * 0))) + ((k * k) * 0)) * (0) + k * ((((((k * 0) + (k * 0)) * (0) + k * ((((0 * (0) + k * (0))) + ((0 * (0) + k * (0))))))) + ((0 * ((k * (0) + k * (0))) + (k * k) * (0))))))) + ((0 * ((k * ((k * (0) + k * (0))) + (k * k) * (0))) + ((k * k) * k) * (0))))))) + ((((((k * 0) + (k * 0)) * ((k * ((7 * 0 - 22 * 0)/ (7 * 7)) + (22 / 7) * (0))) + ((22 / 7) * k) * ((((0 * (0) + k * (0))) + ((0 * (0) + k * (0))))))) + ((((k * (((7 * 0) - (22 * 0)) / (7 * 7))) + ((22 / 7) * 0)) * ((k * (0) + k * (0))) + (k * k) * (((((((7 * 0) - (22 * 0)) / (7 * 7)) * (0) + k * (((7 * 7) * (((0 * (0) + 7 * (0))) - ((0 * (0) + 22 * (0)))) - ((7 * 0) - (22 * 0)) * (7 * (0) + 7 * (0)))/ ((7 * 7) * (7 * 7))))) + ((0 * ((7 * 0 - 22 * 0)/ (7 * 7)) + (22 / 7) * (0))))))))))) + ((((((k * ((k * ((k * ((k * ((k * ((k * ((k * ((k * 0) + (k * 0))) + ((k * k) * 0))) + (((k * k) * k) * 0))) + ((((k * k) * k) * k) * 0))) + (((((k * k) * k) * k) * k) * 0))) + ((((((k * k) * k) * k) * k) * k) * 0))) + (((((((k * k) * k) * k) * k) * k) * k) * 0))) + ((((((((k * k) * k) * k) * k) * k) * k) * k) * 0)) * (1) + j * ((((((k * ((k * ((k * ((k * ((k * ((k * ((k * 0) + (k * 0))) + ((k * k) * 0))) + (((k * k) * k) * 0))) + ((((k * k) * k) * k) * 0))) + (((((k * k) * k) * k) * k) * 0))) + ((((((k * k) * k) * k) * k) * k) * 0))) + (((((((k * k) * k) * k) * k) * k) * k) * 0)) * (0) + k * ((((((k * ((k * ((k * ((k * ((k * ((k * 0) + (k * 0))) + ((k * k) * 0))) + (((k * k) * k) * 0))) + ((((k * k) * k) * k) * 0))) + (((((k * k) * k) * k) * k) * 0))) + ((((((k * k) * k) * k) * k) * k) * 0)) * (0) + k * ((((((k * ((k * ((k * ((k * ((k * 0) + (k * 0))) + ((k * k) * 0))) + (((k * k) * k) * 0))) + ((((k * k) * k) * k) * 0))) + (((((k * k) * k) * k) * k) * 0)) * (0) + k * ((((((k * ((k * ((k * ((k * 0) + (k * 0))) + ((k * k) * 0))) + (((k * k) * k) * 0))) + ((((k * k) * k) * k) * 0)) * (0) + k * ((((((k * ((k * ((k * 0) + (k * 0))) + ((k * k) * 0))) + (((k * k) * k) * 0)) * (0) + k * ((((((k * ((k * 0) + (k * 0))) + ((k * k) * 0)) * (0) + k * ((((((k * 0) + (k * 0)) * (0) + k * ((((0 * (0) + k * (0))) + ((0 * (0) + k * (0))))))) + ((0 * ((k * (0) + k * (0))) + (k * k) * (0))))))) + ((0 * ((k * ((k * (0) + k * (0))) + (k * k) * (0))) + ((k * k) * k) * (0))))))) + ((0 * ((k * ((k * ((k * (0) + k * (0))) + (k * k) * (0))) + ((k * k) * k) * (0))) + (((k * k) * k) * k) * (0))))))) + ((0 * ((k * ((k * ((k * ((k * (0) + k * (0))) + (k * k) * (0))) + ((k * k) * k) * (0))) + (((k * k) * k) * k) * (0))) + ((((k * k) * k) * k) * k) * (0))))))) + ((0 * ((k * ((k * ((k * ((k * ((k * (0) + k * (0))) + (k * k) * (0))) + ((k * k) * k) * (0))) + (((k * k) * k) * k) * (0))) + ((((k * k) * k) * k) * k) * (0))) + (((((k * k) * k) * k) * k) * k) * (0))))))) + ((0 * ((k * ((k * ((k * ((k * ((k * ((k * (0) + k * (0))) + (k * k) * (0))) + ((k * k) * k) * (0))) + (((k * k) * k) * k) * (0))) + ((((k * k) * k) * k) * k) * (0))) + (((((k * k) * k) * k) * k) * k) * (0))) + ((((((k * k) * k) * k) * k) * k) * k) * (0))))))) + ((0 * ((k * ((k * ((k * ((k * ((k * ((k * ((k * (0) + k * (0))) + (k * k) * (0))) + ((k * k) * k) * (0))) + (((k * k) * k) * k) * (0))) + ((((k * k) * k) * k) * k) * (0))) + (((((k * k) * k) * k) * k) * k) * (0))) + ((((((k * k) * k) * k) * k) * k) * k) * (0))) + (((((((k * k) * k) * k) * k) * k) * k) * k) * (0))))))) + ((1 * ((k * ((k * ((k * ((k * ((k * ((k * ((k * ((k * (0) + k * (0))) + (k * k) * (0))) + ((k * k) * k) * (0))) + (((k * k) * k) * k) * (0))) + ((((k * k) * k) * k) * k) * (0))) + (((((k * k) * k) * k) * k) * k) * (0))) + ((((((k * k) * k) * k) * k) * k) * k) * (0))) + (((((((k * k) * k) * k) * k) * k) * k) * k) * (0))) + ((((((((k * k) * k) * k) * k) * k) * k) * k) * k) * (0)))))); // df/(djdj) 
		ders[i*4+3]= ders[i*4+1]; // df/(djdk) 
	}
}

