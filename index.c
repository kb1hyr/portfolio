/** Autogenerated by otemplate v. 0.2.0 */

#include <libintl.h>
#include <string.h>

#include <onion/onion.h>
#include <onion/dict.h>

typedef struct dict_res_t{
	onion_dict *dict;
	onion_response *res;
}dict_res;


void index_html_blocks_init(onion_dict *context);
void index_html(onion_dict *context, onion_response *res);


onion_connection_status index_html_handler_page(onion_dict *context, onion_request *req, onion_response *res){

  index_html(context, res);

  return OCS_PROCESSED;
}


onion_handler *index_html_handler(onion_dict *context){
  return onion_handler_new((onion_handler_handler)index_html_handler_page, context, (onion_handler_private_data_free)onion_dict_free);
}


onion_connection_status index_html_template(onion_dict *context, onion_request *req, onion_response *res){

  if (context) onion_dict_add(context, "LANG", onion_request_get_language_code(req), OD_FREE_VALUE);

  index_html(context, res);

  if (context) onion_dict_free(context);

  return OCS_PROCESSED;
}

#line 1 "index.html"
#line 1
void index_html_blocks_init(onion_dict *context){
#line 1
#line 1
}
#line 1
void index_html(onion_dict *context, onion_response *res){
#line 1
#line 1
  int has_context=(context!=NULL);
#line 1
  if (!has_context)
#line 1
    context=onion_dict_new();
#line 1
  
#line 1
  index_html_blocks_init(context);
  onion_response_write(res, "<!DOCTYPE html>\n"
      "<html lang=\"en\">\n"
      "<head>\n"
      "\t<meta charset=\"UTF-8\">\n"
      "\t<meta http-equiv=\"X-UA-COmpatible\" content=\"IE=edge\">\n"
      "\t<meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">\n"
      "\t<!--<link href=\"https://cdn.jsdelivr.net/npm/bootstrap@5.1.3/dist/css/bootstrap.min.css\" rel=\"stylesheet\" integrity=\"sha384-1BmE4kWBq78iYhFldvKuhfTAU6auU8tT94WrHftjDbrCEXSU1oBoqyl2QvZ6jIW3\" crossorigin=\"anonymous\"> -->\n"
      "\t<link rel=\"stylesheet\" href=\"bootstrap.min.css\" />\t\n"
      "\t<link rel=\"stylesheet\" href=\"https://cdn.jsdelivr.net/npm/bootstrap-icons@1.7.1/font/bootstrap-icons.css\">\n"
      "\t<link href='https://api.mapbox.com/mapbox-gl-js/v2.3.1/mapbox-gl.css' rel='stylesheet' />\n"
      "\t<link rel=\"stylesheet\" href=\"style.css\">\n"
      "\t<title>Portfolio</title>\n"
      "</head>\n"
      "<body>\n"
      "\t<!-- Navbar -->\n"
      "\t<!-- tutorial: https://www.youtube.com/watch?v=4sosXZsdy-s -->\n"
      "\t<nav class=\"navbar navbar-expand-lg bg-dark navbar-dark fixed-top py-3\">\n"
      "\t<div class=\"container\">\n"
      "\t  <a href=\"#\" class=\"navbar-brand\">Portfolio</a>\t\n"
      "\t  <button class=\"navbar-toggler\" type=\"button\" data-bs-toggle=\"collapse\"\n"
      "\t  data-bs-target=\"#navmenu\">\n"
      "\t  \t<span class=\"navbar-toggler-icon\"></span>\n"
      "\t  </button>\n"
      "\t  <div class=\"collapse navbar-collapse\" id=\"navmenu\">\n"
      "\t\t<ul class=\"navbar-nav ms-auto\">\n"
      "\t\t  <li class=\"nav-item\">\n"
      "\t\t    <a href=\"#portfolio\" class=\"nav-link\">Coding Portfolio</a>  \n"
      "\t\t  </li>\n"
      "\t\t  <li class=\"nav-item\">\n"
      "\t\t    <a href=\"#exp\" class=\"nav-link\">Experience</a>  \n"
      "\t\t  </li>\n"
      "\t\t  <li class=\"nav-item\">\n"
      "\t\t    <a href=\"#edu\" class=\"nav-link\">Education & Certs</a>  \n"
      "\t\t  </li>\n"
      "\t\t  <li class=\"nav-item\">\n"
      "\t\t    <a href=\"#res\" class=\"nav-link\">Buzzwords & CV</a>  \n"
      "\t\t  </li>\n"
      "\t\t  <li class=\"nav-item\">\n"
      "\t\t    <a href=\"#orgs\" class=\"nav-link\">Professional Memberships</a>  \n"
      "\t\t  </li>\n"
      "\t\t  <li class=\"nav-item\">\n"
      "\t\t    <a href=\"#soft\" class=\"nav-link\">Squishy Skills</a>  \n"
      "\t\t  </li>\n"
      "\t\t</ul>\t  \n"
      "\t  </div>\n"
      "\t</div>\n"
      "\t</nav>\n"
      "\t\n"
      "\t<!-- Showcase -->\n"
      "\t<section class=\"bg-dark text-light p-5 p-lg-0 pt-lg-5 pb-lg-3 text-center text-sm-start\">\n"
      "\t<div class=\"container\">\n"
      "\t\t<div class=\"d-sm-flex align-items-center justify-content-between\">\n"
      "\t\t\t<div>\n"
      "\t\t\t\t<h1>Brett Markham</h1><br />\n"
      "\t\t\t\t<h1><span class=\"text-warning\">Flexible Developer</span></h1>\n"
      "\t\t\t\t<p class=\"lead my-4\">\n"
      "\t\t\t\t\tApps - utilities - web - embedded\n"
      "\t\t\t\t</p>\t\t\t\n"
      "\t\t\t\t<button class=\"btn btn-primary byn-lg\" \n"
      "\t\t\t\tdata-bs-toggle=\"modal\"\n"
      "\t\t\t\tdata-bs-target=\"#enroll\">\n"
      "\t\t\t\t\tDig Deeper\n"
      "\t\t\t\t</button>\n"
      "\t\t\t</div>\n"
      "\t\t\t<img class=\"img-fluid w-25 d-none d-sm-block\" src=\"img/undraw_online_gallery_re_3098.svg\" alt=\"Gallery\">\t\t\n"
      "\t\t</div>\n"
      "\t\n"
      "\t</div>\t\n"
      "\t\n"
      "\t</section>\t\n"
      "\t\n"
      "\t<!-- Contact -->\n"
      "\t<section class=\"bg-primary text-light p-5\">\n"
      "\t\t<div class=\"container\">\n"
      "\t\t\t<div class=\"d-md-flex justify-content-between align-items-center\">\n"
      "\t\t\t\t<h3 class=\"mb-3 mb-md-0\">\n"
      "\t\t\t\t\tNewsletter Signup\n"
      "\t\t\t\t</h3>\n"
      "\t\t\t\t<div class=\"input-group email-input\">\n"
      "  \t\t\t\t\t<input type=\"text\" class=\"form-control\" placeholder=\"Enter email\">\n"
      "  \t\t\t\t\t<button class=\"btn btn-dark btn-lg\" type=\"button\">Button</button>\n"
      "\t\t\t\t</div>\n"
      "\t\t\t</div>\t\t\n"
      "\t\t\n"
      "\t\t</div>\t\n"
      "\t\n"
      "\t\n"
      "\t</section>\n"
      "\t\n"
      "\t<!-- Boxes -->\n"
      "\t<section class=\"p-5 \">\n"
      "\t\t<div class=\"container\">\n"
      "\t\t\t<div class=\"row text-center gy-2\">\n"
      "\t\t\t\t<div class=\"col-md\">\n"
      "\t\t\t\t\t<div class=\"card bg-dark text-light\">\n"
      "\t\t\t\t\t\t<div class=\"card-body text-center\">\n"
      "\t\t\t\t\t\t\t<div class=\"h1 mb-3\">\n"
      "\t\t\t\t\t\t\t\t<i class=\"bi bi-laptop\"></i>\n"
      "\t\t\t\t\t\t\t</div>\n"
      "\t\t\t\t\t\t\t<h3 class=\"card-title mb-3\">\n"
      "\t\t\t\t\t\t\t\tPortfolio\t\t\t\t\t\t\t\n"
      "\t\t\t\t\t\t\t</h3>\n"
      "\t\t\t\t\t\t\t<p class=\"card-text\">\n"
      "\t\t\t\t\t\t\t\tProjects range from embedded systems to conversion utilities to full-stack websites.\t\t\t\t\t\t\t\n"
      "\t\t\t\t\t\t\t</p>\n"
      "\t\t\t\t\t\t\t<a href=\"#\" class=\"btn btn-primary\">Look and See</a>\n"
      "\t\t\t\t\t\t</div>\n"
      "\t\t\t\t\t</div>\n"
      "\t\t\t\t</div>\t\t\t\t\n"
      "\t\t\t\t<div class=\"col-md\">\n"
      "\t\t\t\t\t<div class=\"card bg-secondary text-light\">\n"
      "\t\t\t\t\t\t<div class=\"card-body text-center\">\n"
      "\t\t\t\t\t\t\t<div class=\"h1 mb-3\">\n"
      "\t\t\t\t\t\t\t\t<i class=\"bi bi-hammer\"></i>\n"
      "\t\t\t\t\t\t\t</div>\n"
      "\t\t\t\t\t\t\t<h3 class=\"card-title mb-3\">\n"
      "\t\t\t\t\t\t\t\tExperience\t\t\t\t\t\t\t\n"
      "\t\t\t\t\t\t\t</h3>\n"
      "\t\t\t\t\t\t\t<p class=\"card-text\">\n"
      "\t\t\t\t\t\t\t\t20+ years of IT experience. Networking, Linux, Programming, Management.\t\t\t\t\t\t\t\n"
      "\t\t\t\t\t\t\t</p>\n"
      "\t\t\t\t\t\t\t<a href=\"#\" class=\"btn btn-dark\">Drill Down</a>\n"
      "\t\t\t\t\t\t</div>\t\t\t\t\t\n"
      "\t\t\t\t\t\n"
      "\t\t\t\t\t</div>\t\t\n"
      "\t\t\t\t</div>\n"
      "\t\t\t\t<div class=\"col-md\">\n"
      "\t\t\t\t\t<div class=\"card bg-dark text-light\">\n"
      "\t\t\t\t\t\t<div class=\"card-body text-center\">\n"
      "\t\t\t\t\t\t\t<div class=\"h1 mb-3\">\n"
      "\t\t\t\t\t\t\t\t<i class=\"bi bi-mortarboard\"></i>\n"
      "\t\t\t\t\t\t\t</div>\n"
      "\t\t\t\t\t\t\t<h3 class=\"card-title mb-3\">\n"
      "\t\t\t\t\t\t\t\tEducation\t\t\t\t\t\t\t\n"
      "\t\t\t\t\t\t\t</h3>\n"
      "\t\t\t\t\t\t\t<p class=\"card-text\">\n"
      "\t\t\t\t\t\t\t\tFormal schooling and diverse certifications for a well-rounded experience\t\t\t\t\t\t\t\n"
      "\t\t\t\t\t\t\t</p>\n"
      "\t\t\t\t\t\t\t<a href=\"#\" class=\"btn btn-primary\">Dig Deeper</a>\n"
      "\t\t\t\t\t\t</div>\t\t\t\t\t\n"
      "\t\t\t\t\t</div>\t\t\n"
      "\t\t\t\t</div>\t\t\t\t\n"
      "\t\t\t</div>\n"
      "<!-- second row -->\n"
      "\t\t\t<div class=\"row text-center gy-2 mt-1\">\n"
      "\t\t\t\t<div class=\"col-md\">\n"
      "\t\t\t\t\t<div class=\"card bg-secondary text-light\">\n"
      "\t\t\t\t\t\t<div class=\"card-body text-center\">\n"
      "\t\t\t\t\t\t\t<div class=\"h1 mb-3\">\n"
      "\t\t\t\t\t\t\t\t<i class=\"bi bi-file-earmark-person\"></i>\n"
      "\t\t\t\t\t\t\t</div>\n"
      "\t\t\t\t\t\t\t<h3 class=\"card-title mb-3\">\n"
      "\t\t\t\t\t\t\t\tC.V. & Buzzwords\t\t\t\t\t\t\t\n"
      "\t\t\t\t\t\t\t</h3>\n"
      "\t\t\t\t\t\t\t<p class=\"card-text\">\n"
      "\t\t\t\t\t\t\t\tDownload a PDF resume or look at the acronyms for the tech I've used.\t\t\t\t\t\t\t\n"
      "\t\t\t\t\t\t\t</p>\n"
      "\t\t\t\t\t\t\t<a href=\"#\" class=\"btn btn-dark\">Plunge</a>\n"
      "\t\t\t\t\t\t</div>\n"
      "\t\t\t\t\t</div>\n"
      "\t\t\t\t</div>\t\t\t\t\n"
      "\t\t\t\t<div class=\"col-md\">\n"
      "\t\t\t\t\t<div class=\"card bg-dark text-light\">\n"
      "\t\t\t\t\t\t<div class=\"card-body text-center\">\n"
      "\t\t\t\t\t\t\t<div class=\"h1 mb-3\">\n"
      "\t\t\t\t\t\t\t\t<i class=\"bi bi-people\"></i>\n"
      "\t\t\t\t\t\t\t</div>\n"
      "\t\t\t\t\t\t\t<h3 class=\"card-title mb-3\">\n"
      "\t\t\t\t\t\t\t\tProfessional Orgs\t\t\t\t\t\t\t\n"
      "\t\t\t\t\t\t\t</h3>\n"
      "\t\t\t\t\t\t\t<p class=\"card-text\">\n"
      "\t\t\t\t\t\t\t\tI belong to some organizations that pertain to my professional interests.\t\t\t\t\t\t\t\n"
      "\t\t\t\t\t\t\t</p>\n"
      "\t\t\t\t\t\t\t<a href=\"#\" class=\"btn btn-primary\">Join Up</a>\n"
      "\t\t\t\t\t\t</div>\t\t\t\t\t\n"
      "\t\t\t\t\t\n"
      "\t\t\t\t\t</div>\t\t\n"
      "\t\t\t\t</div>\n"
      "\t\t\t\t<div class=\"col-md\">\n"
      "\t\t\t\t\t<div class=\"card bg-secondary text-light\">\n"
      "\t\t\t\t\t\t<div class=\"card-body text-center\">\n"
      "\t\t\t\t\t\t\t<div class=\"h1 mb-3\">\n"
      "\t\t\t\t\t\t\t\t<i class=\"bi bi-pen\"></i>\n"
      "\t\t\t\t\t\t\t</div>\n"
      "\t\t\t\t\t\t\t<h3 class=\"card-title mb-3\">\n"
      "\t\t\t\t\t\t\t\tSoft Skills\t\t\t\t\t\t\t\n"
      "\t\t\t\t\t\t\t</h3>\n"
      "\t\t\t\t\t\t\t<p class=\"card-text\">\n"
      "\t\t\t\t\t\t\t\tCoding is important, but communication prevents bugs in advance.\t\t\t\t\t\n"
      "\t\t\t\t\t\t\t</p>\n"
      "\t\t\t\t\t\t\t<a href=\"#\" class=\"btn btn-dark\">Explore</a>\n"
      "\t\t\t\t\t\t</div>\t\t\t\t\t\n"
      "\t\t\t\t\t</div>\t\t\n"
      "\t\t\t\t</div>\t\t\t\t\n"
      "\t\t\t</div>\t\t\t\n"
      "\t\t</div>\t\n"
      "\t</section>\n"
      "\t<!-- Learn Section 1 -->\n"
      "\t<section id=\"learn\" class=\"p-5\">\n"
      "\t\t<div class=\"container\">\n"
      "\t\t\t<div class=\"row align-items-center justify-content-between\">\n"
      "\t\t\t\t\t<div class=\"col-md\">\n"
      "\t\t\t\t\t\t<img src=\"img/fundamentals.svg\" class=\"img-fluid\" alt=\"\">\n"
      "\t\t\t\t\t</div>\n"
      "\t\t\t\t\t<div class=\"col-md p-5\">\n"
      "\t\t\t\t\t\t<h2>Learn the Fundamentals</h2>\n"
      "\t\t\t\t\t\t<p class=\"lead\">\n"
      "\t\t\t\t\t\t\tBlah diddy blah etc Blah diddy blah etc Blah diddy blah etcBlah diddy blah etc Blah diddy blah etc \t\t\t\t\t\n"
      "\t\t\t\t\t\t</p>\t\t\n"
      "\t\t\t\t\t\t<p>\n"
      "\t\t\t\t\t\t\tBlah diddy blah etc Blah diddy blah etc Blah diddy blah etcBlah diddy blah etc Blah diddy blah etc\n"
      "\t\t\t\t\t\t\tBlah diddy blah etc Blah diddy blah etc Blah diddy blah etcBlah diddy blah etc Blah diddy blah etc\t\t\t\t\t\t\n"
      "\t\t\t\t\t\t</p>\t\n"
      "\t\t\t\t\t\t<a href=\"#\" class=\"btn btn-light mt-3\">\n"
      "\t\t\t\t\t\t\t<i class=\"bi bi-chevron-right\"></i>\n"
      "\t\t\t\t\t\t\tRead More\n"
      "\t\t\t\t\t\t</a>\t\t\n"
      "\t\t\t\t\t</div>\n"
      "\t\t\t\n"
      "\t\t\t</div>\n"
      "\t\t</div>\t\t\n"
      "\t</section>\n"
      "\t\n"
      "\t<!-- Learn Section 2 -->\n"
      "\t<section id=\"learn2\" class=\"p-5 bg-dark text-light\">\n"
      "\t\t<div class=\"container\">\n"
      "\t\t\t<div class=\"row align-items-center justify-content-between\">\t\t\t\t\t\n"
      "\t\t\t\t\t<div class=\"col-md p-5\">\n"
      "\t\t\t\t\t\t<h2>Learn React</h2>\n"
      "\t\t\t\t\t\t<p class=\"lead\">\n"
      "\t\t\t\t\t\t\tBlah diddy blah etc Blah diddy blah etc Blah diddy blah etcBlah diddy blah etc Blah diddy blah etc \t\t\t\t\t\n"
      "\t\t\t\t\t\t</p>\t\t\n"
      "\t\t\t\t\t\t<p>\n"
      "\t\t\t\t\t\t\tBlah diddy blah etc Blah diddy blah etc Blah diddy blah etcBlah diddy blah etc Blah diddy blah etc\n"
      "\t\t\t\t\t\t\tBlah diddy blah etc Blah diddy blah etc Blah diddy blah etcBlah diddy blah etc Blah diddy blah etc\t\t\t\t\t\t\n"
      "\t\t\t\t\t\t</p>\t\n"
      "\t\t\t\t\t\t<a href=\"#\" class=\"btn btn-light mt-3\">\n"
      "\t\t\t\t\t\t\t<i class=\"bi bi-chevron-right\"></i>\n"
      "\t\t\t\t\t\t\tRead More\n"
      "\t\t\t\t\t\t</a>\t\t\n"
      "\t\t\t\t\t</div>\n"
      "\t\t\t\t\t<div class=\"col-md\">\n"
      "\t\t\t\t\t\t<img src=\"img/react.svg\" class=\"img-fluid\" alt=\"\">\n"
      "\t\t\t\t\t</div>\t\t\t\n"
      "\t\t\t</div>\n"
      "\t\t</div>\t\t\n"
      "\t</section>\n"
      "\t\n"
      "\t<!-- Questions -->\n"
      "\t<section id=\"questions\" class=\"p-5\">\n"
      "\t\t<div class=\"container\">\n"
      "\t\t\t<h2 class=\"text-center mb-4\">Frequently Asked Questions</h2>\t\n"
      "\t\t\t<div class=\"accordion accordion-flush\" id=\"Questions\">\n"
      "  \t\t\t\t<div class=\"accordion-item\">\n"
      "    \t\t\t\t<h2 class=\"accordion-header\">\n"
      "      \t\t\t\t<button class=\"accordion-button collapsed\" type=\"button\" data-bs-toggle=\"collapse\" data-bs-target=\"#questionOne\" aria-expanded=\"false\" aria-controls=\"flush-collapseOne\">\n"
      "        \t\t\t\tAre you currently available for employment?\n"
      "      \t\t\t\t</button>\n"
      "    \t\t\t\t</h2>\n"
      "    \t\t\t\t<div id=\"questionOne\" class=\"accordion-collapse collapse\" aria-labelledby=\"flush-headingOne\" data-bs-parent=\"#Questions\">\n"
      "      \t\t\t\t<div class=\"accordion-body\">I am currently employed full time and do not expect to be available for full time employment until August of 2022.  I expect limited availability for small \n"
      "      \t\t\t\tprojects starting in April of 2022.  This might vary depending on how many classes I am taking.</div>\n"
      "    \t\t\t\t</div>\n"
      "  \t\t\t\t</div>\n"
      "  \t\t\t\t<div class=\"accordion-item\">\n"
      "    \t\t\t\t<h2 class=\"accordion-header\">\n"
      "      \t\t\t\t<button class=\"accordion-button collapsed\" type=\"button\" data-bs-toggle=\"collapse\" data-bs-target=\"#questionTwo\" aria-expanded=\"false\" aria-controls=\"flush-collapseTwo\">\n"
      "        \t\t\t\tDo you have a social media presence?\n"
      "      \t\t\t\t</button>\n"
      "    \t\t\t\t</h2>\n"
      "    \t\t\t\t<div id=\"questionTwo\" class=\"accordion-collapse collapse\" aria-labelledby=\"flush-headingTwo\" data-bs-parent=\"#Questions\">\n"
      "      \t\t\t\t<div class=\"accordion-body\">I've always been too busy for social media, so my only social media presence is on \n"
      "\t\t\t\t\t\t\t<a href=\"https://www.linkedin.com/in/brett-markham-a770961/\"><i class=\"bi bi-linkedin\"></i></a> and \n"
      "\t\t\t\t\t\t\t<a href=\"https://github.com/kb1hyr/\"><i class=\"bi bi-github\"></i></a>. Every once in a while I've used IRC for tech support.\n"
      "      \t\t\t\t</div>\n"
      "    \t\t\t\t</div>\n"
      "  \t\t\t\t</div>\n"
      "  \t\t\t\t<div class=\"accordion-item\">\n"
      "    \t\t\t\t<h2 class=\"accordion-header\">\n"
      "      \t\t\t\t<button class=\"accordion-button collapsed\" type=\"button\" data-bs-toggle=\"collapse\" data-bs-target=\"#questionThree\" aria-expanded=\"false\" aria-controls=\"flush-collapseThree\">\n"
      "        \t\t\t\tWhat do you think of ...\n"
      "      \t\t\t\t</button>\n"
      "    \t\t\t\t</h2>\n"
      "    \t\t\t\t<div id=\"questionThree\" class=\"accordion-collapse collapse\" aria-labelledby=\"flush-headingThree\" data-bs-parent=\"#Questions\">\n"
      "      \t\t\t\t<div class=\"accordion-body\">My answer depends on context.  Something that might be great in one situation might be a bad idea in another.</div>\n"
      "    \t\t\t\t</div>\n"
      "  \t\t\t\t</div>\n"
      "  \t\t\t\t<div class=\"accordion-item\">\n"
      "    \t\t\t\t<h2 class=\"accordion-header\">\n"
      "      \t\t\t\t<button class=\"accordion-button collapsed\" type=\"button\" data-bs-toggle=\"collapse\" data-bs-target=\"#questionFour\" aria-expanded=\"false\" aria-controls=\"flush-collapseThree\">\n"
      "        \t\t\t\tFrom your books you seem like a biology person.  What's with the coding?\n"
      "      \t\t\t\t</button>\n"
      "    \t\t\t\t</h2>\n"
      "    \t\t\t\t<div id=\"questionFour\" class=\"accordion-collapse collapse\" aria-labelledby=\"flush-headingThree\" data-bs-parent=\"#Questions\">\n"
      "      \t\t\t\t<div class=\"accordion-body\">I've worked in electronics and computers since the 90's.  I don't watch TV so I have a lot of biotech knowledge I acquired instead, but that's not on this website.</div>\n"
      "    \t\t\t\t</div>\n"
      "  \t\t\t\t</div>\n"
      "  \t\t\t\t<div class=\"accordion-item\">\n"
      "    \t\t\t\t<h2 class=\"accordion-header\">\n"
      "      \t\t\t\t<button class=\"accordion-button collapsed\" type=\"button\" data-bs-toggle=\"collapse\" data-bs-target=\"#questionFive\" aria-expanded=\"false\" aria-controls=\"flush-collapseThree\">\n"
      "        \t\t\t\tX super-important trendy skill is missing!\n"
      "      \t\t\t\t</button>\n"
      "    \t\t\t\t</h2>\n"
      "    \t\t\t\t<div id=\"questionFive\" class=\"accordion-collapse collapse\" aria-labelledby=\"flush-headingThree\" data-bs-parent=\"#Questions\">\n"
      "      \t\t\t\t<div class=\"accordion-body\">I concentrate on fundamentals, and can easily acquire any needed specifics.  When it comes to specific tools, these change over time.  For example, Subversion is replaced by Git or Ant is replaced with Maven.\n"
      "      \t\t\t\tSo although I know some of these (currently) trendy things, I might not know the next trendy thing, such as when Git is replaced with Mercurial.  (Hey, network effects can make anything happen!)\n"
      "      \t\t\t\t</div>\n"
      "    \t\t\t\t</div>\n"
      "  \t\t\t\t</div>\n"
      "  \t\t\t\t<div class=\"accordion-item\">\n"
      "    \t\t\t\t<h2 class=\"accordion-header\">\n"
      "      \t\t\t\t<button class=\"accordion-button collapsed\" type=\"button\" data-bs-toggle=\"collapse\" data-bs-target=\"#questionSix\" aria-expanded=\"false\" aria-controls=\"flush-collapseThree\">\n"
      "        \t\t\t\tWhich Linux distro?\n"
      "      \t\t\t\t</button>\n"
      "    \t\t\t\t</h2>\n"
      "    \t\t\t\t<div id=\"questionSix\" class=\"accordion-collapse collapse\" aria-labelledby=\"flush-headingThree\" data-bs-parent=\"#Questions\">\n"
      "      \t\t\t\t<div class=\"accordion-body\">For standard desktop, I like Mint Cinnamon, for music production I like Kubuntu with KxStudio repos.  For servers and VPSs I like Debian.  For \n"
      "      \t\t\t\tengineering and coding, I like OpenSuSE Tumbleweed.  That said, I wish to avoid religious wars, so I am sure your distro preferences are superior to mine. :)\n"
      "      \t\t\t\t</div>\n"
      "    \t\t\t\t</div>\n"
      "  \t\t\t\t</div>\n"
      "\t\t\t\t</div>\t\t\n"
      "\t\t</div>\n"
      "\t</section>\n"
      "\t<!-- buddies -->\n"
      "\t<section id=\"buddies\" class=\"p-5 bg-primary\">\n"
      "\t\t<div class=\"container\">\n"
      "\t\t\t<h2 class=\"text-center text-white\">My Buddies</h2>\t\t\n"
      "\t\t\t<p class=\"lead text-center text-white mb-5\"> \n"
      "\t\t\tAll my buddies are the absolute finest of people.  \t\t\t\n"
      "\t\t\t</p>\n"
      "\t\t\t<div class=\"row g-4\">\n"
      "\t\t\t\t<div class=\"col-md-6 col-lg-3\">\n"
      "\t\t\t\t\t<div class=\"card bg-light\">\n"
      "\t\t\t\t\t\t<div class=\"card-body text-center\">\n"
      "\t\t\t\t\t\t\t<img src=\"https://randomuser.me/api/portraits/men/11.jpg\" class=\"rounded-circle mb-3\" alt=\"\" />\t\t\t\t\t\t\n"
      "\t\t\t\t\t\t\t<h3 class=\"card-title mb-3\">Joe Johnson</h3>\n"
      "\t\t\t\t\t\t\t<p class=\"card-text\">There are so many great things to say about Joe.</p>\n"
      "\t\t\t\t\t\t</div>\t\t\t\t\t\n"
      "\t\t\t\t\t</div>\t\t\t\t\n"
      "\t\t\t\t\n"
      "\t\t\t\t</div>\t\t\n"
      "\t\t\t\t<div class=\"col-md-6 col-lg-3\">\n"
      "\t\t\t\t\t<div class=\"card bg-light\">\n"
      "\t\t\t\t\t\t<div class=\"card-body text-center\">\n"
      "\t\t\t\t\t\t\t<img src=\"https://randomuser.me/api/portraits/men/12.jpg\" class=\"rounded-circle mb-3\" alt=\"\" />\t\t\t\t\t\t\n"
      "\t\t\t\t\t\t\t<h3 class=\"card-title mb-3\">Ben Ford</h3>\n"
      "\t\t\t\t\t\t\t<p class=\"card-text\">There are so many great things to say about Ben.</p>\n"
      "\t\t\t\t\t\t</div>\t\t\t\t\t\n"
      "\t\t\t\t\t</div>\t\t\t\t\n"
      "\t\t\t\t\n"
      "\t\t\t\t</div>\t\n"
      "\t\t\t\t<div class=\"col-md-6 col-lg-3\">\n"
      "\t\t\t\t\t<div class=\"card bg-light\">\n"
      "\t\t\t\t\t\t<div class=\"card-body text-center\">\n"
      "\t\t\t\t\t\t\t<img src=\"https://randomuser.me/api/portraits/men/13.jpg\" class=\"rounded-circle mb-3\" alt=\"\" />\t\t\t\t\t\t\n"
      "\t\t\t\t\t\t\t<h3 class=\"card-title mb-3\">Mike Clay</h3>\n"
      "\t\t\t\t\t\t\t<p class=\"card-text\">There are so many great things to say about Mike.</p>\n"
      "\t\t\t\t\t\t</div>\t\t\t\t\t\n"
      "\t\t\t\t\t</div>\t\t\t\t\n"
      "\t\t\t\t\n"
      "\t\t\t\t</div>\t\n"
      "\t\t\t\t<div class=\"col-md-6 col-lg-3\">\n"
      "\t\t\t\t\t<div class=\"card bg-light\">\n"
      "\t\t\t\t\t\t<div class=\"card-body text-center\">\n"
      "\t\t\t\t\t\t\t<img src=\"https://randomuser.me/api/portraits/men/14.jpg\" class=\"rounded-circle mb-3\" alt=\"\" />\t\t\t\t\t\t\n"
      "\t\t\t\t\t\t\t<h3 class=\"card-title mb-3\">Timothy Tucker</h3>\n"
      "\t\t\t\t\t\t\t<p class=\"card-text\">There are so many great things to say about Tim.</p>\n"
      "\t\t\t\t\t\t</div>\t\t\t\t\t\n"
      "\t\t\t\t\t</div>\t\t\t\t\n"
      "\t\t\t\t</div>\t\t\n"
      "\t\t\t</div>\n"
      "\t\t</div>\n"
      "\t</section>\n"
      "\t<!-- Contact -->\n"
      "\t<section class=\"p-5\">\n"
      "\t\t<div class=\"container\">\n"
      "\t\t\t<div class=\"row g-4\">\n"
      "\t\t\t\t<div class=\"col-md\">\n"
      "\t\t\t\t\t<h2 class=\"text-center mb-4\">Contact Info</h2>\n"
      "\t\t\t\t\t<ul class=\"list-group list-group-flush lead\">\n"
      "\t\t\t\t\t\t<li class=\"list-group-item\">\n"
      "\t\t\t\t\t\t\t<span class=\"fw-bold\">Main Location: </span>New Ipswich, NH\t\t\t\t\t\t\n"
      "\t\t\t\t\t\t</li>\t\t\n"
      "\t\t\t\t\t\t<li class=\"list-group-item\">\n"
      "\t\t\t\t\t\t\t<span class=\"fw-bold\">Phone: </span>603-555-1212\t\t\t\t\t\t\n"
      "\t\t\t\t\t\t</li>\t\n"
      "\t\t\t\t\t\t<li class=\"list-group-item\">\n"
      "\t\t\t\t\t\t\t<span class=\"fw-bold\">Email: </span>/\\brutus.laurentius/\\/\\@/\\/\\outlook.com\t\t\t\t\t\t\n"
      "\t\t\t\t\t\t</li>\t\t\t\t\n"
      "\t\t\t\t\t</ul>\n"
      "\t\t\t\t</div>\n"
      "\t\t\t\t<div class=\"col-md\">\n"
      "\t\t\t\t\t<div id=\"map\"></div>\t\t\n"
      "\t\t\t\t</div>\n"
      "\t\t\t</div>\t\n"
      "\t\t</div>\t\n"
      "\t</section>\n"
      "\t\n"
      "\t<!-- footer -->\n"
      "\t<footer class=\"p-5 bg-dark text-white text-center position-relative\">\n"
      "\t\t<p class=\"lead\">Copyright &copy; Brett Markham 2022</p>\n"
      "\t\t<a href=\"#\" class=\"position-absolute bottom-0 end-0 p-5\">\n"
      "\t\t\t<i class=\"bi bi-arrow-up-circle h1\"></i>\n"
      "\t\t</a>\n"
      "\t</footer>\n"
      "\t\n"
      "\t<!-- Modal -->\n"
      "\t<div class=\"modal fade\" id=\"enroll\" tabindex=\"-1\" aria-labelledby=\"enrollLabel\" aria-hidden=\"true\">\n"
      "  <div class=\"modal-dialog\">\n"
      "    <div class=\"modal-content\">\n"
      "      <div class=\"modal-header\">\n"
      "        <h5 class=\"modal-title\" id=\"titleLabel\">Contact Me</h5>\n"
      "        <button type=\"button\" class=\"btn-close\" data-bs-dismiss=\"modal\" aria-label=\"Close\"></button>\n"
      "      </div>\n"
      "      <div class=\"modal-body\">\n"
      "      \t<p class=\"lead\">\n"
      "\t\t\t\tFill out this form and I'll get back to you.\t  \n"
      "\t\t\t\t<form>\n"
      "\t\t\t\t\t<div class=\"mb-3\">\n"
      "\t\t\t\t\t\t<label for=\"name\" class=\"col-form-label\">Name:</label>\n"
      "\t\t\t\t\t\t<input type=\"text\" class=\"form-control\" id=\"name\" />\n"
      "\t\t\t\t\t</div>\t\t\t\t\n"
      "\t\t\t\t\t<div class=\"mb-3\">\n"
      "\t\t\t\t\t\t<label for=\"email\" class=\"col-form-label\">Email:</label>\n"
      "\t\t\t\t\t\t<input type=\"text\" class=\"form-control\" id=\"email\" />\n"
      "\t\t\t\t\t</div>\n"
      "\t\t\t\t\t<div class=\"mb-3\">\n"
      "\t\t\t\t\t\t<label for=\"message\" class=\"col-form-label\">Message:</label>\n"
      "\t\t\t\t\t\t<input type=\"text\" class=\"form-control\" id=\"message\" />\n"
      "\t\t\t\t\t</div>\n"
      "\t\t\t\t\n"
      "\t\t\t\t</form>      \n"
      "      \t</p>\n"
      "      </div>\n"
      "      <div class=\"modal-footer\">\n"
      "        <button type=\"button\" class=\"btn btn-secondary\" data-bs-dismiss=\"modal\">Close</button>\n"
      "        <button type=\"button\" class=\"btn btn-primary\" data-bs-dismiss=\"modal\">Submit</button>\n"
      "      </div>\n"
      "    </div>\n"
      "  </div>\n"
      "</div>\n"
      "\t\n"
      "\t<script src=\"https://cdn.jsdelivr.net/npm/bootstrap@5.1.3/dist/js/bootstrap.bundle.min.js\" integrity=\"sha384-ka7Sk0Gln4gmtz2MlQnikT1wXgYsOg+OMhuP+IlRH9sENBO0LRn5q+8nbTov4+1p\" crossorigin=\"anonymous\"></script>\n"
      "\t<script src='https://api.mapbox.com/mapbox-gl-js/v2.3.1/mapbox-gl.js'></script>\n"
      "\t<script>\n"
      "\t\tmapboxgl.accessToken = 'pk.eyJ1IjoiYm1hcmtoYW0iLCJhIjoiY2t3azR5NXFnMW90cDJ4cDh3eG45NXJ2MiJ9.IXNcDuNV-LiWvk32mfU90Q';\n"
      "\t\tvar map = new mapboxgl.Map(", 17780);
  onion_response_write(res, "{\n"
      "\t\t\tcontainer: 'map',\n"
      "\t\t\tstyle: 'mapbox://styles/mapbox/streets-v11',\n"
      "\t\t\tcenter:[-71.060982, 42.35725],\n"
      "\t\t\tzoom: 18,\n"
      "\t\t});\t\t\n"
      "\t</script>\n"
      "\n"
      "</body>\n"
      "</html>\n"
      "\n"
      "", 155);
#line 459
  if (!has_context)
#line 459
    onion_dict_free(context);
#line 1
}
