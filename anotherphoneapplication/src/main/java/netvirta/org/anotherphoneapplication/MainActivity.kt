package netvirta.org.anotherphoneapplication

import android.support.v7.app.AppCompatActivity
import android.os.Bundle
import kotlinx.android.synthetic.main.activity_main.*
import netvirta.org.somenativelibrary.Kernel

class MainActivity : AppCompatActivity() {

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        vuworld.text = {Kernel()}.invoke().stringFromJNI()
    }
}
