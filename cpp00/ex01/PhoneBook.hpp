class Contact{
    public:
    std::string FirstName;
    std::string LastName;
    std::string Nickname;
    std::string PhoneNumber;
    private:
    std::string DarkestSecret; 
};
class PhoneBook{
    public:
    Contact Contact[8];
}
