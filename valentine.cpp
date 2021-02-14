#include <iostream>
#include <bitset>
#include <string>
#include <locale>
#include <codecvt>
#include <stack>
#include <regex>
#include <climits>

namespace Cpp_machine_go_brrr = std;
using Cpp_machine_go_brrr::string;

#define MULT(a,b) a * b

void foo();
void bar();
void baz();
void qux();
bool is_little_endian();
char html_decode(string);

struct maerts {
	Cpp_machine_go_brrr::stack<char> cstack;
	maerts& operator<<(char & c) {
		cstack.push(c);
		if (cstack.size() == 3) {
			while ( !cstack.empty() ) {
				c = cstack.top();
				cstack.pop();
				Cpp_machine_go_brrr::cout << c;
			}
		}
		return *this;
	}
	explicit operator bool() const { return bool(Cpp_machine_go_brrr::cout); }
};

class Mystery {
    friend Cpp_machine_go_brrr::ostream & operator<<(Cpp_machine_go_brrr::ostream & _stream, Mystery const & m) {
        _stream << m.m_self_str;
    }

    string m_self_str = string("being ");
};

class Hacker : private Mystery {
	public: 
		Hacker() {
			Cpp_machine_go_brrr::cout << "in ";
		}
	
};

// :)
int main() {
	
	char ajfhglridgn[] = {0x48, 0x61, 0x70, 0x70, 0x79, 0x00 };
	Cpp_machine_go_brrr::cout << string(ajfhglridgn) << string( 1, ' ');
	char xoxo = 'b' ^ '4';
	char loop_de_loop;
	for (loop_de_loop = 'a'; (loop_de_loop - 'a'+1) < 12; loop_de_loop++);

	Cpp_machine_go_brrr::cout << xoxo << char(0141) << loop_de_loop;
	int gay = 0xc105e75;
	char farquad = 14;
	printf("%x", farquad & 0xff);
	string lorem_ipsum = string("Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.");
	Cpp_machine_go_brrr::cout << lorem_ipsum.at(87) << lorem_ipsum.at(88);
	auto riter = lorem_ipsum.crbegin();
	for (;*riter != lorem_ipsum[lorem_ipsum.find_last_of(lorem_ipsum.at(84))]; riter++);
	Cpp_machine_go_brrr::cout << *riter << lorem_ipsum.at(87);
	printf("%x", farquad & 0xff);
	Cpp_machine_go_brrr::u16string apostrophos ( u"\uff07\0\0\0" );
	Cpp_machine_go_brrr::wstring_convert<Cpp_machine_go_brrr::codecvt_utf8<char16_t>, char16_t> converter;
	// Something about doing this causes "tzlove" to be printed after "!\n"??? Fortunately the problem goes away if I print other letters in its place.
	// C really do be like that sometimes...
	const char * creeper = "J\back\b\b\bdaws\b love\b\b\b\b\b\b\b\b my \bb\b\b\big\b\b \b\bsp\bhi\bnx\b\b\b \bof\b\b q\bua\b\b\brtz\b\b\b";
	Cpp_machine_go_brrr::cout << converter.to_bytes(apostrophos);
	Cpp_machine_go_brrr::cout << creeper;
	const char * null = "\a\x20\x00";
	
	Cpp_machine_go_brrr::cout << null << char(4 * 17) << (char)0x61 << string("why").substr(2,1) << "," << null << "Alice!" << std::endl;
	
	string perm("yh aTokn");
	Cpp_machine_go_brrr::cout << perm.at(4) << perm.at(1) << perm.at(3) << perm.at(7) << perm.at(6) << perm.at(2) << perm.at(0) << perm.at(5) << (is_little_endian() ? (char)gay : (char)(gay ^ 0xff)) << null;
	
	Cpp_machine_go_brrr::cout << html_decode("&#102;") << html_decode("&#111;") << html_decode("&#114;") << html_decode("&#032;");
	
	Mystery weesnaw;
	Cpp_machine_go_brrr::cout << weesnaw;
	
	Hacker l33t_h4x0r;
	
	auto s = std::string(" ym");
	maerts os;
	int i = 0;
	for (unsigned int i = 0; i < s.length() && os << s.at(i); i++);
	
	char i_swear_this_is_actually_valid_ascii = (char) MULT(32 + 38, 2);
	string quote("Friendship isn't about who you've known the longest. It's about who walked into your life, said \"I'm here for you\", and proved it.");
	Cpp_machine_go_brrr::cout << i_swear_this_is_actually_valid_ascii << quote.substr(86, 3);
	string decimal = "2.997e8";
	Cpp_machine_go_brrr::smatch matches;
	Cpp_machine_go_brrr::regex regexpr("[0-9]*(\\.)[0-9]+(e-?[0-9]+)?");
	Cpp_machine_go_brrr::regex_search(decimal, matches, regexpr);
	Cpp_machine_go_brrr::cout << matches[1] << std::endl;
	
	Cpp_machine_go_brrr::bitset<CHAR_BIT> ch(0x57);
	Cpp_machine_go_brrr::cout << (char)ch.to_ulong();
	for (int i = 1; i <= 5; i++) {
		ch.flip(i);
	}
	Cpp_machine_go_brrr::cout << (char)ch.to_ulong();
	for (int i = 0; i <= 4; i++) {
		ch.flip(i);
	}
	ch.flip(1);
	Cpp_machine_go_brrr::cout << (char)ch.to_ulong();
	for (int i = 2; i <= 4; i++) {
		ch.flip(i);
	}
	Cpp_machine_go_brrr::cout << (char)ch.to_ulong();
	ch.flip(3);
	ch.flip(6);
	Cpp_machine_go_brrr::cout << (char)ch.to_ulong();
	
	string quote2("Good friends care for each other, close friends understand each other, but true friends, stay forever, beyond words, beyond distance, beyond time.");
	Cpp_machine_go_brrr::cout << quote2.substr(13, 4) << "," << Cpp_machine_go_brrr::endl;

	foo();
	
	return 0;
}

bool is_little_endian() {
	union {
		uint32_t i;
		char c[4];
	} bint = {0x01020304};
	return bint.c[0] == 4;
}

char html_decode(string ch) {
	auto iter = ch.cbegin();
	if (*(iter++) == '&' && *(iter++) == '#') {
		int i = Cpp_machine_go_brrr::stoi( ch.substr(2, 4) );
		iter += 3;
		if (iter == ch.cend() || *(iter++) == ';') {
			return char(i);
		}
	}
	return '\0';
}

void foo() {
	bar();
}

void bar() {
	baz();
}

void baz() {
	qux();
}

void qux() {
	static int nonce = 0;
	if (nonce <= 3) {
		nonce++;
		foo();
	}
	else {
		Cpp_machine_go_brrr::cout << "Bob." << Cpp_machine_go_brrr::endl;		
	}
}

