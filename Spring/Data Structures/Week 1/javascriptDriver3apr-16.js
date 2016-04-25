// if the application is being loaded on the client side, then load google maps
if (Meteor.isClient) {
  Meteor.startup(function() {
    GoogleMaps.load();
  });

//  .______      ___       _______  _______    .______        ______    __    __  .___________. __  .__   __.   _______ 
//  |   _  \    /   \     /  _____||   ____|   |   _  \      /  __  \  |  |  |  | |           ||  | |  \ |  |  /  _____|
//  |  |_)  |  /  ^  \   |  |  __  |  |__      |  |_)  |    |  |  |  | |  |  |  | `---|  |----`|  | |   \|  | |  |  __  
//  |   ___/  /  /_\  \  |  | |_ | |   __|     |      /     |  |  |  | |  |  |  |     |  |     |  | |  . `  | |  | |_ | 
//  |  |     /  _____  \ |  |__| | |  |____    |  |\  \----.|  `--'  | |  `--'  |     |  |     |  | |  |\   | |  |__| | 
//  | _|    /__/     \__\ \______| |_______|   | _| `._____| \______/   \______/      |__|     |__| |__| \__|  \______| 
//                                                                                                                      

  Router.configure({
    // sets the default navigation layout to template called mainNav
    layoutTemplate: 'mainNav'
  });

  // routing for first page 
  Router.route('/', function() {
    // renders first page called '/'
    this.render('homePage');
    // gets layout from mainNav
    this.layout('mainNav');
  });

  // routing for second page  
  Router.route('/mapPage', function() {
    // the Map Page called 'secondPage'
    this.render('mapPage');
    // gets layout from mainNav
    this.layout('mainNav');
  });

  // routing for third page called 'thirdPage'
  Router.route('/electionResults', function() {
    this.render('electionResults');
    this.layout('mainNav');
  });

   Router.route('/registerToVote', function() {
    this.render('registerToVote');
    this.layout('mainNav');
  });

   Router.route('/currentElectionsMenu', function() {
    this.render('currentElectionsMenu');
    this.layout('mainNav');
  });

   Router.route('/electionDates', function() {
    this.render('electionDates');
    this.layout('mainNav');
  });

  Router.route('/myDistrictAndOfficials', function() {
    this.render('myDistrictAndOfficials');
    this.layout('mainNav');
  });

  Router.route('/precinctDisctrictMaps', function() {
    this.render('precinctDisctrictMaps');
    this.layout('mainNav');
  });

  Router.route('/CSPAN', function() {
    this.render('CSPAN');
    this.layout('mainNav');
  });

   Router.route('/PDC', function() {
    this.render('PDC');
    this.layout('mainNav');
  });



   Router.route('/accessibleVoting', function() {
    this.render('accessibleVoting');
    this.layout('mainNav');
  });

   Router.route('/ballotReturns', function() {
    this.render('ballotReturns');
    this.layout('mainNav');
  });

   Router.route('/militaryAndOverseas', function() {
    this.render('militaryAndOverseas');
    this.layout('mainNav');
  });

   Router.route('/needABallot', function() {
    this.render('needABallot');
    this.layout('mainNav');
  });

   Router.route('/registrationDeadlines', function() {
    this.render('registrationDeadlines');
    this.layout('mainNav');
  });

   Router.route('/sampleBallot', function() {
    this.render('sampleBallot');
    this.layout('mainNav');
  });

   Router.route('/statistics', function() {
    this.render('statistics');
    this.layout('mainNav');
  });

   Router.route('/voterPamphlet', function() {
    this.render('voterPamphlet');
    this.layout('mainNav');
  });

   Router.route('/ballotReceived', function() {
    this.render('ballotReceived');
    this.layout('mainNav');
  });


//  .___  ___.      ___      .______      .______      ___       _______  _______     __    __   _______  __      .______    _______ .______          _______.
//  |   \/   |     /   \     |   _  \     |   _  \    /   \     /  _____||   ____|   |  |  |  | |   ____||  |     |   _  \  |   ____||   _  \        /       |
//  |  \  /  |    /  ^  \    |  |_)  |    |  |_)  |  /  ^  \   |  |  __  |  |__      |  |__|  | |  |__   |  |     |  |_)  | |  |__   |  |_)  |      |   (----`
//  |  |\/|  |   /  /_\  \   |   ___/     |   ___/  /  /_\  \  |  | |_ | |   __|     |   __   | |   __|  |  |     |   ___/  |   __|  |      /        \   \    
//  |  |  |  |  /  _____  \  |  |         |  |     /  _____  \ |  |__| | |  |____    |  |  |  | |  |____ |  `----.|  |      |  |____ |  |\  \----.----)   |   
//  |__|  |__| /__/     \__\ | _|         | _|    /__/     \__\ \______| |_______|   |__|  |__| |_______||_______|| _|      |_______|| _| `._____|_______/    
//                                                                                                                                                            

// check to see if meteor is running on the client
if (Meteor.isClient) { 

  // helper code for the template called secondPage, whic is the Map Page
  Template.mapPage.helpers({
    // helper text for olympia template
    olympia: [
      { text: "Church of the Good Shepherd - 1601 North Street SE"},
      { text: "Gloria Dei Lutheran Church - 1515 Harrison Ave NW"},
      { text: "Crain's Office Supply - 1006 4th Ave E"},
      { text: "Haggen NW Fresh - 1313 Cooper Point Rd SW"},
      { text: "The Evergreen State College - 2700 McCann Plaza Dr NW"},
      { text: "Thurston County Courthouse - 2000 Lakeridge Drive SW"}
    ]
  });

  // helper code for the template called secondPage, whic is the Map Page
  Template.mapPage.helpers({
    // helper text for lacey template
    lacey: [
      { text: "Fire District 3, Station 34 - 8407 Steilacoom Road SE"},
      { text: "Fire District 3, Station 35 - 3701 Willamette Drive NE"},
      { text: "Lacey City Hall - 420 College St SE"},
      { text: "Lacey Post Office - 5815 Lacey Blvd SE (next to the drive up mail boxes on Clearbrook Dr. SE)"},
      { text: "Martin Village - 5600 Martin Way E (Parking lot by Taco Bell)"},
      { text: "Woodland Retirement and Assisted Living Community - 4532 Intelco Loop SE"}
    ]
  });

  // helper code for the template called secondPage, whic is the Map Page
  Template.mapPage.helpers({
      // helper text for tumwater template
      tumwater: [
        { text: "Black Lake - Fire 5, Station 1 - 5911 Black Lake Boulevard SW, Olympia"},
        { text: "Tumwater Timberland Library - 7023 New Market St SW"},
        { text: "Tumwater School Administration - 621 Linwood Avenue SW"}
    ]
  });

  // helper code for the template called secondPage, whic is the Map Page
  Template.mapPage.helpers({
      // helper text for northCounty template
      northCounty: [
        { text: "South Bay - Fire 8, Station 81 - 3506 Shincke Road NE, Olympia"},
        { text: "South Bay - Fire 8, Station 83 - 5046 Boston Harbor Rd NE, Olympia"}
    ]
  });

  // helper code for the template called secondPage, whic is the Map Page
  Template.mapPage.helpers({
      // helper text for southCounty template
      southCounty: [
        { text: "Bucoda - 103 S Main St (across the street from the Liberty Market)"},
        { text: "Tenino School District Administration - 301 Old Highway 99 N"}
    ]
  });

  // helper code for the template called secondPage, whic is the Map Page
  Template.mapPage.helpers({
      // helper text for southeastCounty template
      southeastCounty: [
        { text: "Lackamas Elementary - 16240 Bald Hill Road SE, Yelm"},
        { text: "Rainier City Hall - 102 Rochester Street W"},
        { text: "Yelm School Administration - 110 1st Street N (in the parking lot across the street from the building)"}
    ]
  });

  // helper code for the template called secondPage, whic is the Map Page
  Template.mapPage.helpers({
      // helper text for southwestCounty template
      southwestCounty: [
        { text: "Grand Mound Center - 19949 Old Highway 99 SW, Rochester"},
        { text: "Littlerock - Fire 11 - 10828 Littlerock Road SW"},
        { text: "Rochester - Fire 1, Station 3 - 18346 Albany Street SW"}
    ]
  });

  // helper code for the template called secondPage, whic is the Map Page
  Template.mapPage.helpers({
      // helper text for steamboat template
      steamboat: [
        { text: "Fire 13, Station 1 - 3707 Steamboat Loop NW, Olympia"}
    ]
  });
} 

// declare an array containing each drop box location which get listed as arrays
// the 0th element in each location array is the name of the location and address
// the 1st element in each location array is the global latitude 
// the 2nd element of each location array is the global longitutde
// the 3rd element in each array is the stub url for the google maps link for each marker
var locations = [
  //Olympia Area
  ["Church of the Good Shepherd - 1601 North Street SE", 47.015693, -122.880327, "http://maps.google.com/maps?q=loc:"],
  ["Gloria Dei Lutheran Church - 1515 Harrison Ave NW", 47.045438, -122.920795, "http://maps.google.com/maps?q=loc:"],
  ["Crain's Office Supply - 1006 4th Ave E", 47.045903, -122.889725, "http://maps.google.com/maps?q=loc:"],
  ["Haggen NW Fresh - 1313 Cooper Point Rd SW", 47.034041, -122.941126, "http://maps.google.com/maps?q=loc:"],
  ["The Evergreen State College - 2700 McCann Plaza Dr NW", 47.070621, -122.975550, "http://maps.google.com/maps?q=loc:"],
  ["Thurston County Courthouse - 2000 Lakeridge Drive SW", 47.029325, -122.912259, "http://maps.google.com/maps?q=loc:"],

  //Lacey Area
  ["Fire District 3, Station 34 - 8407 Steilacoom Road SE", 47.046257, -122.760674, "http://maps.google.com/maps?q=loc:"],
  ["Fire District 3, Station 35 - 3701 Willamette Drive NE", 47.087262, -122.756488, "http://maps.google.com/maps?q=loc:"],
  ["Lacey City Hall - 420 College St SE", 47.044870, -122.822385],
  ["Lacey Post Office - 5815 Lacey Blvd SE (next to the drive up mail boxes on Clearbrook Dr. SE)", 47.035447, -122.806746, "http://maps.google.com/maps?q=loc:"],
  ["Martin Village - 5600 Martin Way E (Parking lot by Taco Bell)", 47.050695, -122.809381, "http://maps.google.com/maps?q=loc:"],
  ["Woodland Retirement and Assisted Living Community - 4532 Intelco Loop SE", 46.997026, -122.829927, "http://maps.google.com/maps?q=loc:"],

  //Tumwater Area
  ["Black Lake - Fire 5, Station 1 - 5911 Black Lake Boulevard SW, Olympia", 46.994528, -122.985977, "http://maps.google.com/maps?q=loc:"],
  ["Tumwater Timberland Library - 7023 New Market St SW", 46.984924, -122.913489, "http://maps.google.com/maps?q=loc:"],
  ["Tumwater School Administration - 621 Linwood Avenue SW", 47.006690, -122.912322, "http://maps.google.com/maps?q=loc:"],

  //North County
  ["South Bay - Fire 8, Station 81 - 3506 Shincke Road NE, Olympia", 47.082048, -122.845710, "http://maps.google.com/maps?q=loc:"],
  ["South Bay - Fire 8, Station 83 - 5046 Boston Harbor Rd NE, Olympia", 47.105178, -122.881059, "http://maps.google.com/maps?q=loc:"],

  //South County
  ["Bucoda - 103 S Main St (across the street from the Liberty Market)", 46.800934, -122.868281, "http://maps.google.com/maps?q=loc:"],
  ["Tenino School District Administration - 301 Old Highway 99 N", 46.861889, -122.849146, "http://maps.google.com/maps?q=loc:"],

  //Southeast County
  ["Lackamas Elementary - 16240 Bald Hill Road SE, Yelm", 46.850892, -122.487265, "http://maps.google.com/maps?q=loc:"],
  ["Rainier City Hall - 102 Rochester Street W", 46.889787, -122.688449, "http://maps.google.com/maps?q=loc:"],
  ["Yelm School Administration - 110 1st Street N (in the parking lot across the street from the building)", 46.942029, -122.605436, "http://maps.google.com/maps?q=loc:"],

  //Southwest County
  ["Grand Mound Center - 19949 Old Highway 99 SW, Rochester", 46.798333, -123.012520, "http://maps.google.com/maps?q=loc:"],
  ["Littlerock - Fire 11 - 10828 Littlerock Road SW", 46.930317, -122.990689, "http://maps.google.com/maps?q=loc:"],
  ["Rochester - Fire 1, Station 3 - 18346 Albany Street SW", 46.820223, -123.096305, "http://maps.google.com/maps?q=loc:"],

  //Steamboat Island
  ["Fire 13, Station 1 - 3707 Steamboat Loop NW, Olympia", 47.085221, -123.015991, "http://maps.google.com/maps?q=loc:"]
];

// initialize variable for acquiring the users position(latitude and Longitutde)
var latLng;

Template.mapPage.onCreated(function() {
  // We can use the `ready` callback to interact with the map API once the map is ready.
  GoogleMaps.ready("exampleMap", function(map) {
    // set variable latLng to get geolocation from device GPS services if they are turned on
    latLng = Geolocation.latLng();
    // initilize and set variable to creat google maps marker for users current GPS position
    var userPos = new google.maps.Marker({
      // position of the marker set to variable latLng
      position: latLng,
      // set the icon to the google maps yellow-person
      icon: 'https://www.google.com/help/hc/images/maps_street_view.png',
      // set google maps marker animation to DROP
      animation: google.maps.Animation.DROP,
      // tell it which map to load on, this case map.instance
      map: map.instance
    });

    // initialize variable which gets a google maps infoWindow for each marker
    var infowindow = new google.maps.InfoWindow();
    // initialize variables for drop box markers, markers, and iterator called i
    var markers, i;
    // iterate over all of the items in the locations variable array defined above
    for(i = 0; i < locations.length; i++) {
      // set variable markers to new google maps marker
      markers = new google.maps.Marker({
        // the position of this new marker should be the lat and long of the drop box, which are the 1st and 2nd
        // elements of the locations arrays
        position: new google.maps.LatLng(locations[i][1], locations[i][2]),
        // url for each location marker. Concantenates the google maps url stub with the Lat and Lng from locations
        url: locations[i][3]+locations[i][1]+","+locations[i][2],
        // tell it which map to load on, this case map.instance
        map: map.instance
      });
      // add a google map event listener to check if a drop box marker is clicked
      google.maps.event.addListener(markers, 'click', (function(markers, i) {
        return function() {
          // tell the contents of the infoWindow to be set to the 0th elements in the locations array
          infowindow.setContent(locations[i][0]);
          window.location.href = markers.url;
          // tell the infoWindow which map to load on, this care map.instance
          infowindow.open(map.instance, markers);
        }
        // note here
      })(markers, i));
    };
  });
});

// helper code for secondPage, which is the Map Page
Template.mapPage.helpers({
  exampleMapOptions: function() {
    // set latLng to Geolocation position from GPS services
    latLng = Geolocation.latLng();
    // check to see if google maps has loaded and that variable latLng is not NULL
    if (GoogleMaps.loaded() && latLng) {
      // map initialization options if the above was true
      return {
        // set the center of the map to your GPS positions 
        center: new google.maps.LatLng(latLng.lat, latLng.lng),
        // set it so you cannot use the scrollwheel to manipulate the zoom of the map
        scrollwheel: false,
        // set it so you cannot use your finger to drag the map around on mobile
        draggable: false,
        // set the zoom of the map when it loads to 14 (0 is all of earth, 20 is ontop of you)
        zoom: 14
      };
    }
    // if the map is loaded but Geolocation is not available, center map around Thurston County
    /*else if(GoogleMaps.loaded()) {
      return {
      // set the center of the map to Thurston County
      center: new google.maps.LatLng(47.0425, -122.8931),
      // set it so you cannot use the scrollwheel to manipulate the zoom of the map
      scrollwheel: false,
      // set it so you cannot use your finger to drag the map around on mobile
      draggable: false,
      zoom: 10
      };
    }  */
    console.log("Map is ready and showing");
  }
});


}

