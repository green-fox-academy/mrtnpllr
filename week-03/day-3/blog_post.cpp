#include <iostream>
#include "BlogPost.h"

/*Create a few blog post objects:
"Lorem Ipsum" titled by John Doe posted at "2000.05.04."
Lorem ipsum dolor sit amet.
"Wait but why" titled by Tim Urban posted at "2010.10.10."
A popular long-form, stick-figure-illustrated blog about almost everything.
"One Engineer Is Trying to Get IBM to Reckon With Trump" titled by William Turton at "2017.03.28."
Daniel Hanley, a cybersecurity engineer at IBM, doesn’t want to be the center of attention.
When I asked to take his picture outside one of IBM’s New York City offices, he told me that he wasn’t really into the whole
organizer profile thing.*/

int main ()
{
    std::string author3 = "William Turton";
    std::string title3 = "One Engineer Is Trying to Get IBM to Reckon With Trump";
    std::string text3 = "One Engineer Is Trying to Get IBM to Reckon With Trump\" titled by William Turton at \"2017.03.28.\"\n"
                        "Daniel Hanley, a cybersecurity engineer at IBM, doesn’t want to be the center of attention. \n"
                        "When I asked to take his picture outside one of IBM’s New York City offices, he told me that he wasn’t really into the whole \n"
                        "organizer profile thing.";
    std::string date3 = "2017.03.28.";

    BlogPost Post1("John Doe", "Lorem Ipsum", "Lorem ipsum dolor sit amet,", "2000.05.04.");
    BlogPost Post2("Tim Urban", "Wait but why", "A popular long-form, stick-figure-illustrated blog about almost everything.", "2010.10.10");
    BlogPost Post3(author3, title3, text3, date3);

    std::cout << Post3.getTitle() << std::endl << Post3.getText() << std::endl << Post3.getAuthorName() << std::endl << Post3.getPublicationDate() << std::endl;
    
    return 0;
}