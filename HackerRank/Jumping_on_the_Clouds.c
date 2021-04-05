int jumpingOnClouds(int c_count, int* c, int k) {
	int i = 0;
	int ans = 100;
	
	do {
		if(c[i] == 0)
			ans -= 1;
		else if(c[i] == 1)
			ans -= 3;
		i = (i+k) % c_count;
	} while(i != 0);

    return ans;
}
