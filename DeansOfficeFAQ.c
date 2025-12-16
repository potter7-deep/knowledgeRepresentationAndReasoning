#include <stdio.h>

int main(){
    int studentStatus;
    int queryType;
    int urgency;

    printf("DEAN'S OFFICE - FREQUENTLY ASKED QUESTIONS SYSTEM\n");
    printf("Production Rules with M = {1,2,3}\n");
    printf("=====================================\n\n");

    printf("1. STUDENT STATUS:\n");
    printf("   1 = Undergraduate\n");
    printf("   2 = Graduate\n");
    printf("   3 = International Student\n");
    printf("   Enter (1-3): ");
    scanf("%d", &studentStatus);

    printf("\n2. QUERY TYPE:\n");
    printf("   1 = Academic (Courses, Grades, Transcripts)\n");
    printf("   2 = Administrative (Enrollment, Documents, Policies)\n");
    printf("   3 = Financial (Fees, Scholarships, Payment Plans)\n");
    printf("   Enter (1-3): ");
    scanf("%d", &queryType);

    printf("\n3. URGENCY:\n");
    printf("   1 = General Information\n");
    printf("   2 = Time-Sensitive\n");
    printf("   3 = Critical/Immediate\n");
    printf("   Enter (1-3): ");
    scanf("%d", &urgency);

    printf("\n--- FREQUENTLY ASKED QUESTIONS & ANSWERS ---\n\n");

    if (studentStatus == 1 && queryType == 1 && urgency == 1) {
        printf("RULE 1: IF Status=Undergraduate AND QueryType=Academic AND Urgency=General\n");
        printf("        Q: How do I access my course materials?\n");
        printf("        A: Log into the Learning Management System (LMS) with your student ID.\n");
        printf("           All course materials are organized by semester and course code.\n");
    } else if (studentStatus == 1 && queryType == 1 && urgency == 2) {
        printf("RULE 2: IF Status=Undergraduate AND QueryType=Academic AND Urgency=TimeSensitive\n");
        printf("        Q: How do I check my current GPA and grades?\n");
        printf("        A: Visit the Student Portal, go to Academic Records > Grade Report.\n");
        printf("           Grades are updated within 5 business days after submission.\n");
    } else if (studentStatus == 1 && queryType == 1 && urgency == 3) {
        printf("RULE 3: IF Status=Undergraduate AND QueryType=Academic AND Urgency=Critical\n");
        printf("        Q: What should I do if I'm failing a course?\n");
        printf("        A: Contact your academic advisor immediately. Options include tutoring,\n");
        printf("           course withdrawal (with dean approval), or late drop.\n");
    } else if (studentStatus == 1 && queryType == 2 && urgency == 1) {
        printf("RULE 4: IF Status=Undergraduate AND QueryType=Administrative AND Urgency=General\n");
        printf("        Q: How do I request my official transcript?\n");
        printf("        A: Submit a request through Student Services Portal or visit the Registrar's Office.\n");
        printf("           Processing takes 3-5 business days.\n");
    } else if (studentStatus == 1 && queryType == 2 && urgency == 2) {
        printf("RULE 5: IF Status=Undergraduate AND QueryType=Administrative AND Urgency=TimeSensitive\n");
        printf("        Q: When is the deadline to add/drop courses?\n");
        printf("        A: Add deadline: End of 2nd week. Drop deadline: End of 8th week.\n");
        printf("           See academic calendar for exact dates.\n");
    } else if (studentStatus == 1 && queryType == 2 && urgency == 3) {
        printf("RULE 6: IF Status=Undergraduate AND QueryType=Administrative AND Urgency=Critical\n");
        printf("        Q: I need emergency documentation. What are my options?\n");
        printf("        A: Visit the Dean's Office directly for emergency requests.\n");
        printf("           Bring valid student ID. Same-day processing available.\n");
    } else if (studentStatus == 1 && queryType == 3 && urgency == 1) {
        printf("RULE 7: IF Status=Undergraduate AND QueryType=Financial AND Urgency=General\n");
        printf("        Q: What are the tuition payment options?\n");
        printf("        A: Options: Full payment, monthly installments, or financial aid.\n");
        printf("           Details available at Finance Office portal.\n");
    } else if (studentStatus == 1 && queryType == 3 && urgency == 2) {
        printf("RULE 8: IF Status=Undergraduate AND QueryType=Financial AND Urgency=TimeSensitive\n");
        printf("        Q: When is tuition payment due?\n");
        printf("        A: Fall semester: August 1-31. Spring semester: December 1-31.\n");
        printf("           Late fees apply after payment deadline.\n");
    } else if (studentStatus == 1 && queryType == 3 && urgency == 3) {
        printf("RULE 9: IF Status=Undergraduate AND QueryType=Financial AND Urgency=Critical\n");
        printf("        Q: My account is on hold. How do I resolve this?\n");
        printf("        A: Contact Finance Office immediately to arrange payment plan.\n");
        printf("           Registration and transcript holds will be lifted after resolution.\n");
    } else if (studentStatus == 2 && queryType == 1 && urgency == 1) {
        printf("RULE 10: IF Status=Graduate AND QueryType=Academic AND Urgency=General\n");
        printf("         Q: What are the thesis/dissertation requirements?\n");
        printf("         A: Requirements vary by program. Contact Graduate Studies Office\n");
        printf("            or review program handbook available online.\n");
    } else if (studentStatus == 2 && queryType == 1 && urgency == 2) {
        printf("RULE 11: IF Status=Graduate AND QueryType=Academic AND Urgency=TimeSensitive\n");
        printf("         Q: When is the thesis defense deadline?\n");
        printf("         A: Spring deadline: May 31. Fall deadline: November 30.\n");
        printf("            Submit thesis committee approval 4 weeks prior.\n");
    } else if (studentStatus == 2 && queryType == 1 && urgency == 3) {
        printf("RULE 12: IF Status=Graduate AND QueryType=Academic AND Urgency=Critical\n");
        printf("         Q: I'm behind on my dissertation. What are my options?\n");
        printf("         A: Request extension through Graduate Advisor immediately.\n");
        printf("            Maximum extensions: 2 semesters. Financial implications apply.\n");
    } else if (studentStatus == 2 && queryType == 2 && urgency == 1) {
        printf("RULE 13: IF Status=Graduate AND QueryType=Administrative AND Urgency=General\n");
        printf("         Q: What are the enrollment requirements for graduate students?\n");
        printf("         A: Minimum 6 credit hours/semester. Part-time options available.\n");
        printf("            Full-time: 9+ credit hours.\n");
    } else if (studentStatus == 2 && queryType == 2 && urgency == 2) {
        printf("RULE 14: IF Status=Graduate AND QueryType=Administrative AND Urgency=TimeSensitive\n");
        printf("         Q: What documents do I need for my graduation application?\n");
        printf("         A: Completed application, degree requirements checklist, final approval\n");
        printf("            from advisor. Deadline: 60 days before commencement.\n");
    } else if (studentStatus == 2 && queryType == 2 && urgency == 3) {
        printf("RULE 15: IF Status=Graduate AND QueryType=Administrative AND Urgency=Critical\n");
        printf("         Q: I need to defer my degree. What's the process?\n");
        printf("         A: Contact Dean's Office immediately. Deferment allowed up to 1 year\n");
        printf("            with valid reason. Registration fees apply.\n");
    } else if (studentStatus == 2 && queryType == 3 && urgency == 1) {
        printf("RULE 16: IF Status=Graduate AND QueryType=Financial AND Urgency=General\n");
        printf("         Q: What graduate assistantships are available?\n");
        printf("         A: TA, RA, and PA positions available. Apply through department.\n");
        printf("            Stipends cover tuition + monthly allowance.\n");
    } else if (studentStatus == 2 && queryType == 3 && urgency == 2) {
        printf("RULE 17: IF Status=Graduate AND QueryType=Financial AND Urgency=TimeSensitive\n");
        printf("         Q: When are assistantship awards announced?\n");
        printf("         A: Spring admission: January. Fall admission: April.\n");
        printf("            Check department website for updates.\n");
    } else if (studentStatus == 2 && queryType == 3 && urgency == 3) {
        printf("RULE 18: IF Status=Graduate AND QueryType=Financial AND Urgency=Critical\n");
        printf("         Q: I lost my funding. What emergency support is available?\n");
        printf("         A: Emergency loans and grants available. Contact Graduate Financial\n");
        printf("            Aid office. Same-day processing for critical cases.\n");
    } else if (studentStatus == 3 && queryType == 1 && urgency == 1) {
        printf("RULE 19: IF Status=International AND QueryType=Academic AND Urgency=General\n");
        printf("         Q: Are there specific academic requirements for international students?\n");
        printf("         A: Same as domestic students. English proficiency tests (TOEFL/IELTS)\n");
        printf("            required for admission. Check minimum scores online.\n");
    } else if (studentStatus == 3 && queryType == 1 && urgency == 2) {
        printf("RULE 20: IF Status=International AND QueryType=Academic AND Urgency=TimeSensitive\n");
        printf("         Q: Can I take courses online as an international student?\n");
        printf("         A: Limited to 1 online course per semester for F-1 visa compliance.\n");
        printf("            Hybrid/in-person preferred. Consult International Student Office.\n");
    } else if (studentStatus == 3 && queryType == 1 && urgency == 3) {
        printf("RULE 21: IF Status=International AND QueryType=Academic AND Urgency=Critical\n");
        printf("         Q: My visa status affects my course load. What should I do?\n");
        printf("         A: Contact International Student Office immediately.\n");
        printf("            They will coordinate with faculty to ensure visa compliance.\n");
    } else if (studentStatus == 3 && queryType == 2 && urgency == 1) {
        printf("RULE 22: IF Status=International AND QueryType=Administrative AND Urgency=General\n");
        printf("         Q: What documents do I need for my I-20 certificate?\n");
        printf("         A: Passport, admission letter, financial documents, and enrollment proof.\n");
        printf("            Apply through International Student Admissions.\n");
    } else if (studentStatus == 3 && queryType == 2 && urgency == 2) {
        printf("RULE 23: IF Status=International AND QueryType=Administrative AND Urgency=TimeSensitive\n");
        printf("         Q: How long does I-20 processing take?\n");
        printf("         A: 5-10 business days for initial issue. Amendments: 2-3 days.\n");
        printf("            Rush processing available for emergency cases.\n");
    } else if (studentStatus == 3 && queryType == 2 && urgency == 3) {
        printf("RULE 24: IF Status=International AND QueryType=Administrative AND Urgency=Critical\n");
        printf("         Q: My I-20 is expiring. What's the emergency procedure?\n");
        printf("         A: Contact International Student Office immediately.\n");
        printf("            They can issue emergency extension valid for processing period.\n");
    } else if (studentStatus == 3 && queryType == 3 && urgency == 1) {
        printf("RULE 25: IF Status=International AND QueryType=Financial AND Urgency=General\n");
        printf("         Q: Are scholarships available for international students?\n");
        printf("         A: Limited scholarships available. Merit-based and need-based.\n");
        printf("            Apply through International Admissions or check website.\n");
    } else if (studentStatus == 3 && queryType == 3 && urgency == 2) {
        printf("RULE 26: IF Status=International AND QueryType=Financial AND Urgency=TimeSensitive\n");
        printf("         Q: Can I work off-campus as an international student?\n");
        printf("         A: Limited to on-campus work (up to 20 hrs/week). Off-campus requires\n");
        printf("            OPT approval. Consult International Student Services.\n");
    } else if (studentStatus == 3 && queryType == 3 && urgency == 3) {
        printf("RULE 27: IF Status=International AND QueryType=Financial AND Urgency=Critical\n");
        printf("         Q: I need emergency financial assistance.\n");
        printf("         A: Contact Dean's Office and International Student Office.\n");
        printf("            Emergency loans available. Fast-track processing available.\n");
    } else {
        printf("Invalid input. Please enter values between 1 and 3.\n");
    }

    return 0;
}
