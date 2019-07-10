#include <iostream>
#include <string>

/*
Post-it
        Create a PostIt class that has
a backgroundColor
a text on it
a textColor
Create a few example post-it objects:
an orange with blue text: "Idea 1"
a pink with black text: "Awesome"
a yellow with green text: "Superb!"*/

class PostIt {
public:
    PostIt(std::string b, std::string t, std::string tc);

    void setBackgroundColor(const std::string &backgroundColor);

    void setText(const std::string &text);

    void setTextColor(const std::string &textColor);

    const std::string &getBackgroundColor() const;

    const std::string &getText() const;

    const std::string &getTextColor() const;

private:

    std::string _backgroundColor;
    std::string _text;
    std::string _textColor;

};

PostIt::PostIt(std::string b, std::string t, std::string tc)
{
    b = _backgroundColor;
    t = _text;
    tc = _textColor;
}

void PostIt::setBackgroundColor(const std::string &backgroundColor)
{
    _backgroundColor = backgroundColor;
}

void PostIt::setText(const std::string &text)
{
    _text = text;
}

void PostIt::setTextColor(const std::string &textColor)
{
    _textColor = textColor;
}

const std::string &PostIt::getBackgroundColor() const
{
    return _backgroundColor;
}

const std::string &PostIt::getText() const
{
    return _text;
}

const std::string &PostIt::getTextColor() const
{
    return _textColor;
}

int main () {

    PostIt postIt1 ("Orange", "Idea 1", "Blue");
    std::cout << postIt1.getTextColor() << std::endl;
    postIt1.setTextColor("Green");
    std::cout << postIt1.getTextColor() << std::endl;


    return 0;
}