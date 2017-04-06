void prosesfaktorial(int a){
	
			int c = 0;
			long long hasil = 1;
			if(a <= 1){
			cout << 1;
			}else{
			for (c = 1; c <= a; c++){
			hasil = hasil*c;
			}
			}
			cout << "hasilnya  : "<< hasil;
			}   
