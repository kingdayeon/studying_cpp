//Ä¸½¶È­

#include <iostream>
using namespace std;

class SinivelCap { //Äà¹° Ã³Ä¡¿ë Ä¸½¶
public:
	void Take() const { 
		cout << "Äà¹°ÀÌ ½Ï~ ³³´Ï´Ù." << endl;
	}
};

class SneezeCap { //ÀçÃ¤±â Ã³Ä¡¿ë Ä¸½¶
public:
	void Take() const {
		cout << "ÀçÃ¤±â°¡ ¸Ü½À´Ï´Ù." << endl;
	}
};

class SnuffleCap { //ÄÚ¸·Èû Ã³Ä¡¿ë Ä¸½¶
public:
	void Take() const {
		cout << "ÄÚ°¡ »½ ¶Õ¸³´Ï´Ù." << endl;
	}
};

class CONTAC600 {
private:
	SinivelCap sin; //Äà¹°
	SneezeCap sne; //ÀçÃ¤±â
	SnuffleCap snu; //ÄÚ¸·Èû

public:
	void Take() const {
		sin.Take();
		sne.Take();
		snu.Take(); //°¢ Å¬·¡½º ¾È¿¡ µé¾îÀÖ´Â ÇÔ¼ö ºÒ·¯ -> ÀÎ¼âµÅ
	}
};

class ColdPatient {
public:
	void TakeCONTAC600(const CONTAC600& cap) const {
		cap.Take();
	}
};

int main(void) {
	CONTAC600 cap;
	ColdPatient sufferer;
	sufferer.TakeCONTAC600(cap);

	return 0;
}