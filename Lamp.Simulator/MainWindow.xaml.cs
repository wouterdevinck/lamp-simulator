using LampInterop;

namespace Lamp.Simulator {

    public partial class MainWindow { 

        public MainWindow() {
            InitializeComponent();
            
            var http = new HttpServer();
            var led = new RgbLed(ellipse);

            var lamp = new LampWrapper(http, led); 
            
            lamp.Start(8282);

        }

    }

}