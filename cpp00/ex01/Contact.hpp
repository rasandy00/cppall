#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact
{
    private:
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _phone_number;
		std::string _darkest_secret;

	public:
		Contact();
		~Contact();

		void setFirstName(const std::string &str);
		void setLastName(const std::string &str);
		void setNickname(const std::string &str);
		void setPhoneNumber(const std::string &str);
		void setDarkestSecret(const std::string &str);

    	const std::string &getFirstName(void) const;
    	const std::string &getLastName(void) const;
    	const std::string &getNickname(void) const;
    	const std::string &getPhoneNumber(void) const;
    	const std::string &getDarkestSecret(void) const;
};

#endif