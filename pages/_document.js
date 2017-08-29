import NextDocument, { Head, Main, NextScript } from 'next/document'
import tachyons from 'tachyons/css/tachyons.min.css';

export default class Document extends NextDocument {
  render () {
    return (
      <html>
        <Head>
          <style dangerouslySetInnerHTML={{ __html: tachyons }} />
        </Head>
        <body className='sans-serif'>
          <Main />
          <NextScript />
        </body>
      </html>
    )
  }
}